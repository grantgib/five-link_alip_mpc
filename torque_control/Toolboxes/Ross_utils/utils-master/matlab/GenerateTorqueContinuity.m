%% Generates Function to Maintain Torque Continuity
PATH = '';

% Torque Continuity
DOA = 10;
u = sym('u',[DOA,1]);
u_prev = sym('u_prev',[DOA,1]);

alpha = sym('a',[DOA,1]);
syms beta s
sigmoid = 2.*alpha + -2.*alpha./(1+exp(-beta*s));

answer = solve(u + sigmoid == u_prev, alpha);
solution = sym(zeros(DOA,1));
f = fields(answer);
for i = 1:numel(f)
   solution(i) = answer.(f{i});
end
matlabFunction(solution, 'File' ,[PATH,'TorqueContinuity'],'Vars',{u, u_prev, s, beta},'Outputs',{'alpha'});


