function [] = Animate_MPC_Traj(ref_info,traj_info,animateSettings)
%% Extract
X_REF_Original = ref_info.x_ref;
t_all = traj_info.t_all;
x_traj = traj_info.x_traj;

%% Reference Trajectory
if animateSettings.ref
    anim = Animator.FiveLinkAnimator(t_all(1:end), X_REF_Original(1:7,1:end));
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