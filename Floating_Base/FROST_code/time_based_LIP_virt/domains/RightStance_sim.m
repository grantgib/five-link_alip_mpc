 % Right Stance Domain 
 %
 % Contact: Right Toe
function domain = RightStance_sim(model, load_path)
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
%     domain = addEvent(domain,x_swing);
    
    % phase variable: time
    t = SymVariable('t');
    p = SymVariable('p',[2,1]);
    tau = (t - p(2))/(p(1) - p(2));
    
   % relative degree two outputs:
    p_com = domain.getComPosition;
    p_stance = getCartesianPosition(domain, domain.ContactPoints.RightToe);
    ya_2 = [x('BaseRotY');
            p_com(3) - p_stance(3);
            p_swing(1) - p_com(1);
            p_swing(3) - p_com(3)];
    
    y2_label = {'torso_angle',...
                'pos_st_TO_com_z',...
                'pos_sw_TO_com_x',...
                'pos_sw_TO_com_z'};
            
    % optional: load expression for virtual constraints while creating
    y2 = VirtualConstraint(domain,ya_2,'time',...
        'DesiredType',      'Bezier',...
        'PolyDegree',       7,...
        'RelativeDegree',   2,...
        'OutputLabel',      {y2_label},...
        'PhaseType',        'TimeBased',...
        'PhaseVariable',    tau,...
        'PhaseParams',      p,...
        'Holonomic',        true,...
        'LoadPath',         load_path);
    
    domain = addVirtualConstraint(domain,y2);
    
end
    