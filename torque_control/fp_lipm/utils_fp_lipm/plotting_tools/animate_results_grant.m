function [sim_restart] = animate_results_grant(sym_info,traj_info,animate_info)
%% Extract inputs
n_q = sym_info.dim.n_q;
time_traj = traj_info.time_traj;
x_traj = traj_info.x_traj;
q_traj = x_traj(1:n_q,:);
p_com_world_traj = traj_info.p_com_world_traj;
kx = traj_info.params.kx;
sim_restart = false;

%% Compute Positions throughout animation
for i = 1:size(x_traj,2)
    q_i = q_traj(:,i);
    p_st_foot(:,i) = p_RightToe(q_i);
    p_st_knee(:,i) = p_q2_right(q_i);
    p_hip(:,i) = [q_i(1); 0; q_i(2)]; % x,y,z
    p_torso(:,i) = p_Torso(q_i);
    p_sw_foot(:,i) = p_LeftToe(q_i);
    p_sw_knee(:,i) = p_q2_left(q_i);
%     thigh = sqrt( (p_hip(1)-p_st_knee(1)).^2 + (p_hip(2)-p_st_knee(2)).^2 + (p_hip(3)-p_st_knee(3)).^2 )
%     shin = sqrt( (p_st_foot(1)-p_st_knee(1)).^2 + (p_st_foot(2)-p_st_knee(2)).^2 + (p_st_foot(3)-p_st_knee(3)).^2 )
end    
    
%% Buttons
figure
hold on;
ylabel('$\mathbf{z [m]}$','interpreter','latex');
xlabel('$\mathbf{x [m]}$','interpreter','latex');
grid on;
ypix = 5;
xpix = 5;
button_play = uicontrol('Units',    'pixels', ...
    'Position', [xpix, ypix, 60, 20], ...
    'String',   'Play', ...
    'Value',    1,...
    'Style','togglebutton');
button_pause = uicontrol('Units',    'pixels', ...
    'Position', [xpix + 80, ypix, 60, 20], ...
    'String',   'Pause', ...
    'Value',    1,...
    'Style','togglebutton');
button_restart = uicontrol('Units',    'pixels', ...
    'Position', [xpix + 160, ypix, 60, 20], ...
    'String',   'Restart', ...
    'Value',    1);
button_end = uicontrol('Units','pixels',...
    'Position', [xpix + 240, ypix, 60,20],...
    'String',   'End',...
    'Value',    1);

time_display = annotation(...
    'textbox',[0 .05 .15 .025],...
    'String',"Time: " + string(time_traj(1)));

%% Ground
ground_right = line([0 50],[0 50*kx],'Linewidth',4,'color','k');
ground_left = line([0 -50],[0 -50*kx],'Linewidth',4,'color','k');

%% Animate Robot
% Initialize robot pose
sz = 5;
link_st_shin = line([p_st_foot(1,1) p_st_knee(1,1)],[p_st_foot(3,1) p_st_knee(3,1)]);
link_st_thigh = line([p_st_knee(1,1) p_hip(1,1)],[p_st_knee(3,1) p_hip(3,1)]);
link_torso = line([p_hip(1,1) p_torso(1,1)],[p_hip(3,1) p_torso(3,1)]);
link_sw_thigh = line([p_hip(1,1) p_sw_knee(1,1)],[p_hip(3,1) p_sw_knee(3,1)]);
link_sw_shin = line([p_sw_knee(1,1) p_sw_foot(1,1)],[p_sw_knee(3,1) p_sw_foot(3,1)]);
com = scatter(p_com_world_traj(1,1),p_com_world_traj(2,1),500);
link_lip = line([p_st_foot(1,1) p_com_world_traj(1,1)],[p_st_foot(3,1) p_com_world_traj(2,1)]);

uistack(link_st_shin, 'bottom');
uistack(link_st_thigh, 'bottom');
uistack(link_torso, 'bottom');
uistack(link_sw_shin, 'bottom');
uistack(link_sw_thigh, 'bottom');
uistack(com,'top');

% color limbs
color_stance = 'b';
color_swing = 'r';
color_torso = 'k';
color_lip = 'm';

% Draw initial pose
axis([p_hip(1,1)-0.5,...
        p_hip(1,1)+2,...
        -0.25,...
        1.6]);
set(link_st_shin,'Color',color_stance,"LineWidth",sz);
set(link_st_thigh,'Color',color_stance,"LineWidth",sz);
set(link_torso,'Color',color_torso,"LineWidth",sz);
set(link_sw_shin,'Color',color_swing,"LineWidth",sz);
set(link_sw_thigh,'Color',color_swing,"LineWidth",sz);
set(com,'MarkerFaceColor','g','MarkerFaceAlpha',1);
set(link_lip,'Color',color_lip,"LineWidth",sz,'LineStyle',':');

% variable for axis shift
% shift = ref_info.step_height_dbl / (length(traj_info.time_traj)/ref_info.num_steps);

drawnow;

% Animate
disp("===================================");
disp("Press play to start animation");
while button_play.Value
   % wait to start  
   pause(0.5);
   
   if ~button_end.Value
       disp("Simulation Stopped");
       return;
   end
end
for i = 1:size(x_traj,2)
    while ~button_pause.Value
        % wait in here while paused
        pause(0.5);
        if ~button_end.Value
            disp("Simulation Stopped");
            return;
        end
        if ~button_restart.Value
            break;
        end
    end
    if ~button_restart.Value
        break;
    end
    if ~button_end.Value
       disp("Simulation Stopped");
       return;
    end
    % Using the set method allows you to redraw the lines without erasing
    % the previous lines on the screen
    set(time_display,...
        'String',"Time: " + string(time_traj(i)));
    set(link_st_shin,...
        'XData',[p_st_foot(1,i) p_st_knee(1,i)],...
        'YData',[p_st_foot(3,i) p_st_knee(3,i)]);
    set(link_st_thigh,...
        'XData',[p_st_knee(1,i) p_hip(1,i)],...
        'YData',[p_st_knee(3,i) p_hip(3,i)]);
    set(link_torso,...
        'XData',[p_hip(1,i) p_torso(1,i)],...
        'YData',[p_hip(3,i) p_torso(3,i)]);
    set(link_sw_thigh,...
        'XData',[p_hip(1,i) p_sw_knee(1,i)],...
        'YData',[p_hip(3,i) p_sw_knee(3,i)]);
    set(link_sw_shin,...
        'XData',[p_sw_knee(1,i) p_sw_foot(1,i)],...
        'YData',[p_sw_knee(3,i) p_sw_foot(3,i)]);
    set(com,...
        'XData',p_com_world_traj(1,i),...
        'YData',p_com_world_traj(2,i));
    set(link_lip,...
        'XData',[p_st_foot(1,i) p_com_world_traj(1,i)],...
        'YData',[p_st_foot(3,i) p_com_world_traj(2,i)])
    % Draw swingfoot trajectory
%     if impact_traj(i) == pred_plot
%         set(traj_swing,'XData',y_sw_traj(1,sw_begin{pred_plot+1}:sw_end{pred_plot+look_ahead}),'YData',y_sw_traj(2,sw_begin{pred_plot+1}:sw_end{pred_plot+look_ahead}))
%         pred_plot = pred_plot + 1;
%     end
    
    % Draw lidar
%     set(lidar,...
%         'XData',[p_hip(1,i) p_hip(1,i)+1.5 p_hip(1,i)+0.1],...
%         'YData',[p_hip(3,i) p_hip(3,i)-0.4 p_hip(3,i)-1.5]);
    
    axis([p_hip(1,i)-0.5,...
          p_hip(1,i)+2,...
          -0.25,...
          1.6]);
    
    drawnow ;       % Draws the newly updated lines onto the figure
    pause(0.001) ;
end

if ~button_restart.Value
    disp("Restarting Simulation");
    sim_restart = true;
    return;
end

disp("Animation Finished!");
disp("Press button to continue");
while true
    if ~button_restart.Value
        disp("Restarting Simulation");
        sim_restart = true;
        return;
    end
    if ~button_end.Value
        disp("Simulation Stopped");
        return;
    end
    pause(0.5);
end
end

