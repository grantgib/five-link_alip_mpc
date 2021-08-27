  Data = Construct_Data();
            q = x(1:7);
            dq = x(8:14);
            
            % EoM Matrices
            B = [0 0 0 0; 0 0 0 0; 0 0 0 0; 1 0 0 0; 0 1 0 0; 0 0 1 0; 0 0 0 1];
            D = InertiaMatrix(q);
            C = CoriolisTerm(q,dq); % note this is actually C*dq, not just C
            G = GravityVector(q);
            
            % Input Parameters
            vd = 0.0; % desired final velocity [m/s]
            max_acc = 0.5; % max velocity increase between steps [m/s]

            % Constraints (Reference positions)
            thetaref = 0; % torso angle
            COMzref = 0.6; % z-COM constraint
            stepHeight = 0.1; % step height

            % Period
            t = t_total - obj.t0; % time at current step trajectory
            T = 0.3; % period length (single support phase duration)
            Tr = T - t; % remaining duration of period given current time
            
            % Other Parameters
            g = 9.81; % gravity
            m = 32; % total mass of robot
            
            % Set Initial X-Swing Foot Position
            if t_total == 0
                h0 = h0_left_com_func(q);
                obj.INITIAL_X_POSITION = h0(3);
            end
            
            % Stance Foot and Constraint Vector Update Logic
            % switch legs if impact is detected
            % note, the robot is about 300N
            if (t >= 0.1) % sufficient amount of time should pass in current step (duration of double stance phase)
                if(obj.STANCE == -1) % if right stance
                    if (GRF(2) >= 50) % if z-GRF of left foot is greater than 50N, switch legs
                        obj.STANCE = 1; % left stance
                        h0 = h0_right_com_func(q); % (constraint vector defined w.r.t. SWING foot--not STANCE!)
                        obj.INITIAL_X_POSITION = h0(3);
                        obj.stepCounter = obj.stepCounter + 1;
                        obj.t0 = t_total; % update time at beginning of step
                    end
                else  % if left stance
                    if (GRF(4) >= 50)% if z-GRF of right foot is greater than 50N, switch legs
                        obj.STANCE = -1; % right stance
                        h0 = h0_left_com_func(q); % (constraint vector defined w.r.t. SWING foot--not STANCE!)
                        obj.INITIAL_X_POSITION = h0(3);
                        obj.stepCounter = obj.stepCounter + 1;
                        obj.t0 = t_total; % update time at beginning of step
                    end
                end
            end
            
            % COM Parameters, Constraint Vector, and Total Angular Momentum (all are stance leg dependant)
            p_COM_world = p_COM_func(q);
            p_st_world = p_right_foot_func(q);
            p_sw_world = p_left_foot_func(q);
            v_COM_world = v_COM_func(q,dq);
            % if right stance
            if (obj.STANCE == -1)
                p_COM_wrt_st_foot = p_COM_right_foot_func(q); % COM position w.r.t. right foot
                v_COM_wrt_st_foot = v_COM_right_foot_func(q,dq); % COM velocity w.r.t. right foot
                p_st_foot_wrt_COM = p_COM_right_foot_func(q); % vector from contact point to COM
                
                % Total Angular momentum given right stance
                L_total_wrt_st_foot = L_total_right_func(q,dq); % Angular momentum at current time
                
                % constraint vector, w.r.t. swing foot
                h0 = h0_left_com_func(q); % if constraint at COM

            else % if left stance
                p_COM_wrt_st_foot = p_COM_left_foot_func(q); % COM position w.r.t. left foot
                v_COM_wrt_st_foot = v_COM_left_foot_func(q,dq); % COM velocity w.r.t. left foot
                p_st_foot_wrt_COM = p_COM_left_foot_func(q); % vector from contact point to COM
                
                % Total Angular momentum given left stance
                L_total_wrt_st_foot = L_total_left_func(q,dq); % Angular momentum at current time
                
                % constraint vector, w.r.t. swing foot
                h0 = h0_right_com_func(q); % if constraint at COM

            end
            
            %% Foot Placement (ALIP model)
%             H = p_COM_wrt_st_foot(2); % height of COM
            H = 0.6;
            
            % Velocity
            vf = [vd;0]; % final (desired) COM velocity at the end of step [m/s]
%             dir = sign(vf(1));
%             vf(1) = dir*min(vd, abs(v_COM_world(1) + max_acc)); % constrain desired velocity between steps to not be above max acceleration value
            
            % Angular Momentum
            Lf = m*(p_st_foot_wrt_COM(2)*vf(1) - p_st_foot_wrt_COM(1)*vf(2)); % final (desired) angular momentum about contact point
            L_y = L_total_wrt_st_foot(2); % y-componet of total current angular momentum
%             L_y = m*(p_st_foot_wrt_COM(2)*v_COM_wrt_st_foot(1) - p_st_foot_wrt_COM(1)*v_COM_wrt_st_foot(2)) + D(3,:)*dq; % y-componet of total current angular momentum

            % Parameters for ALIP model
            l = sqrt(g/H);
            S_T = sinh(l*T);
            C_T = cosh(l*T);
            S_Tr = sinh(l*(Tr));
            C_Tr = cosh(l*(Tr));
            
            % ALIP
            Li = m*H*l*S_Tr*p_COM_wrt_st_foot(1) + C_Tr*L_y; % inital angular momentum at beginning of step
            Lf = median([Li+10,Li-10,Lf]); % constrain final (desired) angular momentum to be within certain bound of Li
            
            xi = 1/(m*H*l*S_T) * (Lf - C_T*Li); % intial (foot placement) COM x-position
            
            xi = - xi; % flip signs to get position of stance foot w.r.t. COM
         
            % Define trajectory to get to xi rather than using xi as the reference x position directly
            % define s
            s = mod(t/T,1); % current s position

            % define control points
            alphai = obj.INITIAL_X_POSITION; % beginning of curve
            alphaf = xi; % end of curve
            
%             alpha1 = (alphai + alphaf)/2; % point between first and last control points (for 2nd order)
            
            alpha1 = alphai; % (for 3rd order)
            alpha2 = alphaf; % (for 3rd order)

            % define bezier curve describing trajectory from current foot placement to desired foot placement xi
%             b = alphai*(1-s) + alphaf*s; % first order (straight line)
%             b = alphai*(1-s)^2 + alpha1*2*s*(1-s) + alphaf*s^2; % second order
            b = alphai*(1-s)^3 + 3*alpha1*s*(1-s)^2 + 3*alpha2*s^2*(1-s) + alphaf*s^3; % third order
     
            %% Reference Trajectory
            % z-coord of swing foot
            % parabola parameters
            temp1 = [0           0      1;...
                     (T/2)^2     T/2    1;...
                     T^2         T      1];
            temp2 = [-COMzref; -COMzref + stepHeight; -COMzref];
            parabola_param = temp1\temp2;
            zd = parabola_param(1)*t^2 + parabola_param(2)*t + parabola_param(3);
            
            % x-coord of swing foot
            xd = b; % final foot placement for current step
 
            % define foot positions
            % if left foot moving (right stance)
            if (obj.STANCE == -1)
                Px_left = xd;
                Pz_left = zd;
                
                Px_right = 0;
                Pz_right = -0.6;
            else % if right foot moving (left stance)
                Px_left = 0;
                Pz_left = -0.6;

                Px_right = xd;
                Pz_right = zd;
            end
            
            %% PD Partial Feedback Linearzation Controller (q_torso, Pz_st_hip, Px/z_sw_ft)
            Kp = 1000 * eye(4);
            Kp(3,3) = 1000; % swing foot x gain
            Kp(4,4) = 2000; % swing foot z gain
            Kd = 50 * eye(4);

            % define current parameters
            % if right stance
            if (obj.STANCE == -1)
                p_sw_ft_ref = [Px_left; Pz_left]; % desired foot position

                J = Jp_right_foot_func(q); % constraint jacobian (corrsponds to GRF inside EoM)
                dJ = dJp_right_foot_func(q,dq);

                Jh = Jh_left_func(q,dq); % jacobian of h0 when left swing w.r.t. hip
                dJh = dJh_left_func(q,dq);
            else % if left stance
                p_sw_ft_ref = [Px_right; Pz_right]; % desired foot position

                J = Jp_left_foot_func(q); % constraint jacobian (corrsponds to GRF inside EoM)
                dJ = dJp_left_foot_func(q,dq);

                Jh = Jh_right_func(q,dq); % jacobian of h0 when right swing w.r.t. hip
                dJh = dJh_right_func(q,dq);
            end

            % define constraints (q_torso, pz_st_hip, px_sw_ft, pz_sw_ft)
            hd = [thetaref; COMzref; p_sw_ft_ref(1); p_sw_ft_ref(2)];  % if constraint at COM
            h = h0 - hd;

            % first derivative of hd (LIP model)
            dhd = zeros(4,1);
            
%             dhd(3) = 1/T * (alphaf - alphai); % first order beizer curve for foot placement
%             dhd(3) = alphai*(2+2*s)+alpha1*(2-4*s)+2*alphaf*s; % second order beizer curve for foot placement
            dhd(3) = alphai*(-3+6*s-3*s^2)+3*alpha1*(1-4*s+3*s^2)+3*alpha2*(2*s-3*s^2)+3*alphaf*s^2; % third order beizer curve for foot placement
            
            dhd(4) = 2*parabola_param(1)*t + parabola_param(2); % parabola trajectory for zd
            
            % second derivative of hd
            ddhd = zeros(4,1);
            
%             ddhd(3) = 2*alphai+4*alpha1+2*alphaf; % second order beizer curve for foot placement
            ddhd(3) = alphai*(6-6*s)+3*alpha1*(-4+6*s)+3*alpha2*(2-6*s)+6*alphaf*s; % third order beizer curve for foot placement
            
            ddhd(4) = 2*parabola_param(1); % parabola trajectory for zd

            % define other relevant parameters
            M =  ([D -J'; J zeros(2,2)]) \ [B; zeros(2,4)];
            b = ([D -J'; J zeros(2,2)]) \ [C+G;dJ*dq];

            M_bar = M(1:7,:);
            b_bar = b(1:7,:);

            % calculate controller u
            u = (Jh*M_bar) \ (ddhd + Jh*b_bar - dJh*dq - Kd*(-dhd + Jh*dq) - Kp*h);