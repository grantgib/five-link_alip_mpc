function [] = Animation_Grant(dyn_info,ctrl_info,ref_info,traj_info,animateSettings)
import casadi.*

%% Extract inputs
% dyn_info
n_q = dyn_info.dim.n_q;
f_p_st_foot = dyn_info.func.f_pos_stance;
f_p_sw_foot = dyn_info.func.f_pos_swing;

% traj_info
x_traj = traj_info.x_traj;
q_traj = traj_info.x_traj(1:n_q,:);
impact_traj = traj_info.impact_traj;
p_st_foot_traj = traj_info.y_st;
p_sw_foot_traj = traj_info.y_sw;
x_ref_traj = traj_info.x_ref_traj;
for i = 1:size(x_ref_traj,2)
   p_st_foot_ref(:,i) = full(f_p_st_foot(x_ref_traj(1:n_q,i)));
   p_sw_foot_ref(:,i) = full(f_p_sw_foot(x_ref_traj(1:n_q,i)));
end

% ref_info
num_steps = ref_info.num_steps;

% ctrl_info
look_ahead = ctrl_info.step_look_ahead;

%% Compute Positions throughout animation
for i = 1:size(x_traj,2)
    q_i = q_traj(:,i);
    p_st_foot(:,i) = p_RightToe(q_i);
    p_st_knee(:,i) = p_q2_right(q_i);
    p_hip(:,i) = [q_i(1); 0; q_i(2)]; % x,y,z
    p_torso(:,i) = p_Torso(q_i);
    p_sw_foot(:,i) = p_LeftToe(q_i);
    p_sw_knee(:,i) = p_q2_left(q_i);
end

%% Compute Impact Times
for i = 0:num_steps-1
    impact_logic = (impact_traj == i*ones(1,size(impact_traj,2)));
    step_begin{i+1} = find(impact_logic,1,'first');
    step_end{i+1} = find(impact_logic,1,'last');
end
pred_plot = 0;
    
    
%% Draw Region
figure
ylabel('$\mathbf{z [m]}$','interpreter','latex');
xlabel('$\mathbf{x [m]}$','interpreter','latex');
grid on;
ypix = 395;
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

%% Draw Stairs
% color_stair = [0 39/256 76/255];
color_stair = [0.9 0.9 0.9];
if ref_info.step_dir == "Ascend"
    length_step = 0.38; % IO-NMPC 0.10m,0.75m/s
    height = ref_info.step_height_dbl;
    offset = 0.1;
    rect = rectangle('Position',[-1 -2*height 10 height]);
        rect.FaceColor = color_stair;
        rect.EdgeColor = color_stair;
    for i = -2:num_steps
        xst = length_step*i - offset;
        xend = length_step*i + length_step - offset;
        zst = height*(i-1);
        zend = height*(i-1) + height;    
        rect = rectangle('Position',[xst zst length_step*(num_steps+1-i) height]);
        rect.FaceColor = color_stair;
        rect.EdgeColor = color_stair;
    end
else % Descend
    offset_start = 100;
    length_step = 0.10;
    offset_reg = 0.05;
    for i = 1:num_steps+1
        xst = length_step*i-offset_start;
        zst = i*ref_info.step_height_dbl;
        if i > num_steps
            rect = rectangle('Position',[xst, zst, 100*offset_start-0.05, abs(ref_info.step_height_dbl)]);
            rect.FaceColor = color_stair;
            rect.EdgeColor = color_stair;
        elseif i == 1
            rect = rectangle('Position',[xst, zst, offset_start, abs(ref_info.step_height_dbl)]);
            rect.FaceColor = color_stair;
            rect.EdgeColor = color_stair;
        else
            rect = rectangle('Position',[xst, zst, offset_start+offset_reg*i, abs(ref_info.step_height_dbl)]);
            rect.FaceColor = color_stair;
            rect.EdgeColor = color_stair;
        end
    end  
end

%% Draw Obstacle
% maize = [256/256 204/256 6/256];
% rect_obs = rectangle('Position',[0.08, 0, 0.2-0.08, 0.1]);
% rect_obs.FaceColor = maize;
% rect_obs.EdgeColor = maize;
% uistack(rect_obs, 'top');

%% Animate Robot
% Initialize robot pose
sz = 5;
link_st_shin = line([p_st_foot(1,1) p_st_knee(1,1)],...
    [p_st_foot(3,1) p_st_knee(3,1)]);
link_st_thigh = line([p_st_knee(1,1) p_hip(1,1)],...
    [p_st_knee(3,1) p_hip(3,1)]);
link_torso = line([p_hip(1,1) p_torso(1,1)],...
    [p_hip(3,1) p_torso(3,1)]);
link_sw_thigh = line([p_hip(1,1) p_sw_knee(1,1)],...
    [p_hip(3,1) p_sw_knee(3,1)]);
link_sw_shin = line([p_sw_knee(1,1) p_sw_foot(1,1)],...
    [p_sw_knee(3,1) p_sw_foot(3,1)]);

uistack(link_st_shin, 'bottom');
uistack(link_st_thigh, 'bottom');
uistack(link_torso, 'bottom');
uistack(link_sw_shin, 'bottom');
uistack(link_sw_thigh, 'bottom');

% color limbs
color_stance = 'b';
color_swing = 'r';
color_torso = 'k';

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

% reference swing foot trajectories
hold on; traj_swing_ref = plot(p_sw_foot_ref(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),p_sw_foot_ref(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'g');
% hold on; traj_stance_ref = plot(p_st_foot_ref(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),p_st_foot_ref(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'b');

% actual swing foot trajectories
hold on; traj_swing = scatter(p_sw_foot_traj(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),p_sw_foot_traj(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),1,'r');
hold on; traj_stance = scatter(p_st_foot_traj(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),p_st_foot_traj(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),1,'b');

% Lidar scan
% hold on;
% lidar = patch([p_hip(1,1) p_hip(1,1)+1.5 p_hip(1,1)+0.1],[p_hip(3,1) p_hip(3,1)-0.4 p_hip(3,1)-1.5],'r');
% lidar.FaceAlpha = 0.2;
% % uistack(lidar, 'bottom');

% variable for axis shift
shift = ref_info.step_height_dbl / (length(traj_info.time_traj)/ref_info.num_steps);

drawnow;
% Animate
while button_play.Value
   % wait to start  
   pause(0.5);
end
for i = 1:size(x_traj,2)
    while ~button_pause.Value
        % wait in here while paused
        pause(0.5);
    end
    if ~button_restart.Value
        break;
    end
    % Using the set method allows you to redraw the lines without erasing
    % the previous lines on the screen
    set(link_st_shin,'XData',[p_st_foot(1,i) p_st_knee(1,i)],...
        'YData',[p_st_foot(3,i) p_st_knee(3,i)],"LineWidth",sz);
    set(link_st_thigh,'XData',[p_st_knee(1,i) p_hip(1,i)],...
        'YData',[p_st_knee(3,i) p_hip(3,i)],"LineWidth",sz);
    set(link_torso,'XData',[p_hip(1,i) p_torso(1,i)],...
        'YData',[p_hip(3,i) p_torso(3,i)],"LineWidth",sz);
    set(link_sw_thigh,'XData',[p_hip(1,i) p_sw_knee(1,i)],...
        'YData',[p_hip(3,i) p_sw_knee(3,i)],"LineWidth",sz);
    set(link_sw_shin,'XData',[p_sw_knee(1,i) p_sw_foot(1,i)],...
        'YData',[p_sw_knee(3,i) p_sw_foot(3,i)],"LineWidth",sz);
    
    % Draw swing/stance foot trajectory
    if pred_plot == impact_traj(i)
        while true
            try isempty(step_end{pred_plot+look_ahead})
                break;
            catch
                look_ahead = look_ahead - 1;
            end
        end
        if isempty(step_end{pred_plot+look_ahead})
            look_ahead = look_ahead - 1;
        end
            set(traj_swing,'XData',p_sw_foot_traj(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_sw_foot_traj(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
            set(traj_stance,'XData',p_st_foot_traj(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_st_foot_traj(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
            set(traj_swing_ref,'XData',p_sw_foot_ref(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_sw_foot_ref(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%         catch
%             look_ahead = look_ahead-1;
%             set(traj_swing,'XData',p_sw_foot_traj(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_sw_foot_traj(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%             set(traj_stance,'XData',p_st_foot_traj(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_st_foot_traj(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%             set(traj_swing_ref,'XData',p_sw_foot_ref(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_sw_foot_ref(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%         end
            %         set(traj_stance_ref,'XData',p_st_foot_ref(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_st_foot_ref(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
        pred_plot = pred_plot + 1;
    elseif pred_plot > impact_traj(i)
%         pred_plot = pred_plot - 1;
%         set(traj_swing,'XData',p_sw_foot_traj(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_sw_foot_traj(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%         set(traj_stance,'XData',p_st_foot_traj(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_st_foot_traj(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%         set(traj_swing_ref,'XData',p_sw_foot_ref(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_sw_foot_ref(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%         set(traj_stance_ref,'XData',p_st_foot_ref(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_st_foot_ref(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%     elseif pred_plot > impact_traj(i)
%         set(traj_swing,'XData',p_sw_foot_traj(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_sw_foot_traj(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%         set(traj_stance,'XData',p_st_foot_traj(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_st_foot_traj(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%         set(traj_swing_ref,'XData',p_sw_foot_ref(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_sw_foot_ref(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
%         set(traj_stance_ref,'XData',p_st_foot_ref(1,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}),'YData',p_st_foot_ref(2,step_begin{pred_plot+1}:step_end{pred_plot+look_ahead}))
    end
    
    % Draw lidar
    try
        set(lidar,'XData',[p_hip(1,i) p_hip(1,i)+1.5 p_hip(1,i)+0.1],...
            'YData',[p_hip(3,i) p_hip(3,i)-0.4 p_hip(3,i)-1.5]);
    catch
    end
    
    axis([p_hip(1,i)-0.5,...
          p_hip(1,i)+2,...
          -0.25 + shift*i,...
          1.6 + shift*i]);
%         axis([p_hip(1,i)-0.5,...
%         p_hip(1,i)+1,...
%         -0.25 + shift,...
%         1.6 + shift]);
    
    drawnow ;       % Draws the newly updated lines onto the figure
    pause(0.01) ;
end

if ~button_restart.Value
    Animation_Grant(dyn_info,ctrl_info,ref_info,traj_info,animateSettings);
end


end

