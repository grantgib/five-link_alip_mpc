function [] = Animate_MPC_Traj(ctrl_info,ref_info,traj_info,animateSettings)
%% Reference Trajectory
if animateSettings.ref
    % ref_info
    x_ref_traj = traj_info.x_ref_traj;
    % traj_info
    t_all = traj_info.time_traj;
    % mpc info
    mpc_info = ctrl_info.mpc_info;

    anim = Animator.FiveLinkAnimator(t_all(1:end), x_ref_traj(1:7,1:end));
    anim.pov = Animator.AnimatorPointOfView.West;
    anim.Animate(true);
    anim.isLooping = false;
    anim.updateWorldPosition = true;
    conGUI = Animator.AnimatorControls();
    conGUI.anim = anim;
    title('reference')
end

%% Actual Trajectory
if animateSettings.traj
    % traj_info
    t_all = traj_info.time_traj;
    x_traj = traj_info.x_traj;
    
        set(gcf,'color','w');

    anim2 = Animator.FiveLinkAnimator(t_all, x_traj(1:7,:));
    anim2.speed = animateSettings.speed;
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


%% Single Solution Trajectory
if animateSettings.single_sol
    % mpc_info
    if isempty(mpc_info)
        DT = 0.005;
        N = 1;
    else
        N = mpc_info.N;
        DT = mpc_info.DT;
    end
    % traj_info
    t_all = linspace(0,N*DT,N+1);
    x_traj = traj_info.x_traj_all(:,:,1);
    anim2 = Animator.FiveLinkAnimator(t_all, x_traj(1:7,:));
    anim2.pov = Animator.AnimatorPointOfView.West;
    anim2.Animate(true);
    anim2.isLooping = false;
    anim2.updateWorldPosition = true;
    conGUI2 = Animator.AnimatorControls();
    conGUI2.anim = anim2;
    %         title('real trajectory');
    set(gcf,'color','w');
end

end