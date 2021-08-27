 % Right Stance Domain 
 %
 % Contact: Right Toe
function domain = RightStance(model, load_path)
    % construct the right stance domain of RABBIT
    %
    % Parameters:
    % model: the right body model of ATLAS robot
    
    %% first make a copy of the robot model
    %| @note Do not directly assign with the model variable, since it is a
    %handle object.
    domain = copy(model);
    % set the name of the new copy
    domain.setName('RightStance');
    
    % Extract state variables
    x = domain.States.x;
    dx = domain.States.dx;
    
    % add contact
    right_sole = ToContactFrame(domain.ContactPoints.RightToe,...
        'PointContactWithFriction');
    fric_coef.mu = 0.6;
    % load symbolic expressions for contact (holonomic) constraints
    domain = addContact(domain,right_sole,fric_coef, [], load_path);
    
    % add event
    % height of non-stance foot (left toe)
    p_swing = getCartesianPosition(domain, domain.ContactPoints.LeftToe);
    z_swing = UnilateralConstraint(domain,p_swing(3),'leftFootHeight','x');
    % often very simple, no need to load expression. Compute them directly
    domain = addEvent(domain,z_swing);
    
    % phase variable: time
    t = SymVariable('t');
    p = SymVariable('p',[2,1]);
    tau = (t - p(2))/(p(1) - p(2));
    
    % relative degree two outputs:
    hip_pos = [x('BasePosX'); 0; x('BasePosZ')]';
    
    p_stance = getCartesianPosition(domain,domain.ContactPoints.RightToe);
    p_stance_proj = [p_stance(1:2); x('BasePosZ')]';
    d_stance_proj = norm(p_stance- p_stance_proj);
    d_stance_hip = norm(p_stance - hip_pos);
%     stance_leg_ang = acos(d_stance_proj/d_stance_hip);
    stance_leg_ang = domain.States.x(3) + domain.States.x(4) + domain.States.x(5)/2;
    
    p_swing_proj = [p_swing(1:2); x('BasePosZ')]';
    d_swing_proj = norm(p_swing  - p_swing_proj);
    d_swing_hip = norm(p_swing - hip_pos);
%     swing_leg_ang = acos(d_swing_proj/d_swing_hip);
    swing_leg_ang = domain.States.x(3) + domain.States.x(6) + domain.States.x(7)/2;
    ya_2 = [x('BaseRotY');
            x('q2_right');
            stance_leg_ang;
            swing_leg_ang];
    
    y2_label = {'torso_angle',...
                'stance_knee_angle',...
                'stance_leg_angle',...
                'swing_leg_angle'};
            
    % optional: load expression for virtual constraints while creating
    y2 = VirtualConstraint(domain,ya_2,'time',...
        'DesiredType',      'Bezier',...
        'PolyDegree',       5,...
        'RelativeDegree',   2,...
        'OutputLabel',      {y2_label},...
        'PhaseType',        'TimeBased',...
        'PhaseVariable',    tau,...
        'PhaseParams',      p,...
        'Holonomic',        true,...
        'LoadPath',         load_path);
    
    domain = addVirtualConstraint(domain,y2);
    
end
    