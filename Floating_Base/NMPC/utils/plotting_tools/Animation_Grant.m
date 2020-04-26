function [] = Animation_Grant(dyn_info,ctrl_info,ref_info,traj_info,animateSettings)
import casadi.*

%% Extract inputs
n_q = dyn_info.dim.n_q;
x_traj = traj_info.x_traj;
q_traj = traj_info.x_traj(1:n_q,:);


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
num_steps = ref_info.num_steps;
% length = 0.325; % IO 0.10,0.75
length = 0.36; % IO-NMPC 0.10m,0.75m/s
height = double(ref_info.step_height);
col = [0 39/256 76/255];
col2 = [1 203/255 5/255];
if ref_info.step_dir == "Descend"
    height = -height;
end
wd = 5;
offset = 0.1;
gnd = 20;
rect = rectangle('Position',[-1 -2*height 10 height]);
    rect.FaceColor = col;
    rect.EdgeColor = col;
for i = -2:num_steps
    
    xst = length*i - offset;
    xend = length*i + length - offset;
    zst = height*(i-1);
    zend = height*(i-1) + height;    
    rect = rectangle('Position',[xst zst length*(num_steps+1-i) height]);
    rect.FaceColor = col;
    rect.EdgeColor = col;
    %     line([xst xend],[zst zst],'LineWidth',wd,'color','k');
    %     line([xend xend],[zst zend],'LineWidth',wd,'color','k');
end


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
axis([p_hip(1,1)-1,...
        p_hip(1,1)+1,...
        -2*height,...
        2]);
set(link_st_shin,'LineWidth',2,'Color',color_stance,"LineWidth",sz);
set(link_st_thigh,'LineWidth',2,'Color',color_stance,"LineWidth",sz);
set(link_torso,'LineWidth',2,'Color',color_torso,"LineWidth",sz);
set(link_sw_shin,'LineWidth',2,'Color',color_swing,"LineWidth",sz);
set(link_sw_thigh,'LineWidth',2,'Color',color_swing,"LineWidth",sz);
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
    axis([p_hip(1,i)-1,...
        p_hip(1,i)+1,...
        -2*height,...
        2]);
    
    drawnow ;       % Draws the newly updated lines onto the figure
    pause(0.005) ;
end

if ~button_restart.Value
    Animation_Grant(dyn_info,ctrl_info,ref_info,traj_info,animateSettings);
end


end

