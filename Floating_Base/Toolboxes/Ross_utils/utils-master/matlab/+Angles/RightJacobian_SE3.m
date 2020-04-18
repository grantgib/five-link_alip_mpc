function [ output ] = RightJacobian_SE3( xi )
%RIGHTJACOBIAN as defined in http://perpustakaan.unitomo.ac.id/repository/Associating%20Uncertainty%20With%20Three-Dimensional.pdf

output = Angles.Adjoint_SE3(Angles.Exp_SE3(-xi)) * Angles.LeftJacobian_SE3(xi);

end

