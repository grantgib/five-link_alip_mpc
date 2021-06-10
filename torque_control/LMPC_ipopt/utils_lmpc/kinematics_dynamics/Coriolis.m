function [C_mat] = Coriolis(D,q,dq)
import casadi.*

n = size(D,2); % size of q
C_mat = SX.zeros(n,n);    % initialize coriolis matrix
     
for i = 1:n
    for j = 1:n
        for k = 1:n
            C_mat(i,j) = C_mat(i,j) + (1/2) * dq(k) * ( jacobian(D(i,j),q(k)) + ...
                jacobian(D(i,k),q(j)) - jacobian(D(j,k),q(i)) ); 
        end
    end
end

end

