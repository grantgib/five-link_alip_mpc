function traj=referenceTrajBez(gait,delT)
%example of bezCoef
    % bezCoef={};
    % bezCoef{1}=gait(1).params.adoubleSupportConst;
    % bezCoef{3}=gait(3).params.arightStance;
    % bezCoef{5}=gait(5).params.aleftStance;
%% get the traj for position and velocity
traj={};
CHECK=0;
for i=1:2:length(gait)
    t=gait(i).tspan;
    t0=t(1);
    tf=t(end);
    tdes=t0:delT:tf;
    t_par=(t-t0)/(tf-t0);
    alpha_u=calculations.bezfit(t_par,gait(i).inputs.u,5);
    alpha_x=calculations.bezfit(t_par,gait(i).states.x,5);
    alpha_dx=calculations.bezfit(t_par,gait(i).states.dx,5);
    for k=1:length(tdes)
        s=(tdes(k)-t0)/(tf-t0);
        ds=1/(tf-t0);
        traj(i).x(:,k)=calculations.bezier_Jessy(alpha_x,s);
        traj(i).dx(:,k)=calculations.bezier_Jessy(alpha_dx,s);
        traj(i).u(:,k)=calculations.bezier_Jessy(alpha_u,s);
    end
end

%check
if CHECK
for j=1:21
    est(:,j)=calculations.bezier_Jessy(alpha_x,t_par(j));
    dest(:,j)=calculations.bezier_Jessy(alpha_dx,t_par(j));
    uest(:,j)=calculations.bezier_Jessy(alpha_u,t_par(j));
end
est-gait(i).states.x;
dest-gait(i).states.dx;
uest-gait(i).inputs.u;
end
end