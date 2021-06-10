function [] = animate_results_FROST(traj_info,animate_info)
%% Actual Trajectory
if animate_info.traj
    % traj_info
    t_all = traj_info.time_traj;
    x_traj = traj_info.x_traj;
    set(gcf,'color','w');
    
    anim2 = Animator.FiveLinkAnimator(t_all, x_traj(1:7,:));
    anim2.speed = animate_info.speed;
    anim2.pov = Animator.AnimatorPointOfView.West;
    anim2.Animate(true);
    anim2.isLooping = false;
    anim2.updateWorldPosition = true;
    hold on; rectangle('Position',[0.25 0 5 0.05]); hold on;
    set(gcf,'color','w');
    
    conGUI2 = Animator.AnimatorControls();
    set(gcf,'color','w');
    hold on; rectangle('Position',[0.25 0 5 0.05]); hold on;

    conGUI2.anim = anim2;
    %         title('real trajectory');
    set(gcf,'color','w');
        hold on; rectangle('Position',[0.25 0 5 0.05]); hold on;

end

end