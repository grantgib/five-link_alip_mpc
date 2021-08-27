function traj = referenceTrajBez(gait,delT)
%example of bezCoef
% bezCoef={};
% bezCoef{1}=gait(1).params.adoubleSupportConst;
% bezCoef{3}=gait(3).params.arightStance;
% bezCoef{5}=gait(5).params.aleftStance;
%% get the traj for position and velocity
traj = {};
CHECK = 0;
for i=1:2:length(gait)
    t = gait(i).tspan;
    t0 = t(1);
    tf = t(end);
    t_par = (t-t0)/(tf-t0);
    
    M = 15;
    free = [0 0 ones(1,M-3) 0 0]; % constrain position/derivative at 
    % beginning and end of trajectory
    alpha_u = bezfit(t_par,gait(i).inputs.u,free);
    alpha_x = bezfit(t_par,gait(i).states.x,free);
    alpha_dx = bezfit(t_par,gait(i).states.dx,free);
    alpha_ddx = bezfit(t_par,gait(i).states.ddx,free);
    
    % Interpolate for new trajectory
    tdes = t0:delT:tf;
    for k = 1:length(tdes)
        s = (tdes(k)-t0)/(tf-t0);
        ds = 1/(tf-t0);
        traj{i}.x(:,k) = calculations.bezier_Jessy(alpha_x,s);
        traj{i}.dx(:,k) = calculations.bezier_Jessy(alpha_dx,s);
        traj{i}.ddx(:,k) = calculations.bezier_Jessy(alpha_ddx,s);
        traj{i}.u(:,k) = calculations.bezier_Jessy(alpha_u,s);
        %         traj{i}.dx(:,k) = calculations.dbezier(alpha_x,s)*ds;
        traj{i}.ds = ds;
    end
    
end


% Check
if CHECK
    
    if true
        close all;
        figure
        for i = 1:7
            subplot(3,3,i)
            plot(gait(1).tspan,gait(1).states.x(i,:)); hold on;
            plot(tdes,traj{1}.x(i,:));
            legend('original', 'new');
            title("x_" + i);
        end
        figure
        for i = 1:7
            subplot(3,3,i)
            plot(gait(1).tspan,gait(1).states.dx(i,:)); hold on;
            plot(tdes,traj{1}.dx(i,:));
            legend('original','new');
            title("dx_" + i);
        end
        figure
        for i = 1:7
            subplot(3,3,i)
            plot(gait(1).tspan,gait(1).states.ddx(i,:)); hold on;
            plot(tdes,traj{1}.ddx(i,:));
            legend('original','new');
            title("ddx_" + i);
        end
        
        figure
        for i = 1:4
            subplot(2,2,i)
            plot(gait(1).tspan,gait(1).inputs.u(i,:)); hold on;
            plot(tdes,traj{1}.u(i,:));
            legend('original','new');
            title("u_" + i);
        end
    end
    
    
%     for j=1:21
%         est(:,j) = calculations.bezier_Jessy(alpha_x,t_par(j));
%         dest(:,j) = calculations.dbezier(alpha_x,t_par(j)).*ds;
%         uest(:,j) = calculations.bezier_Jessy(alpha_u,t_par(j));
%     end
%     q_error = est-gait(i).states.x(4:end,:); disp("q_error = "); disp(q_error);
%     dq_error = dest-gait(i).states.dx(4:end,:); disp("dq_error = "); disp(dq_error);
%     u_error = uest-gait(i).inputs.u; disp("u_error = "); disp(u_error);
%     
%     if true
%         figure
%         for i = 1:4
%             subplot(2,2,i);
%             plot(q_error(i,:));
%         end
%         sgtitle('y_{err} discrete');
%         
%         figure
%         for i = 1:4
%             subplot(2,2,i);
%             plot(dq_error(i,:));
%         end
%         sgtitle('dy_{err} discrete');
%     end
end









end