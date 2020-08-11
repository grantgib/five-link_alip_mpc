function [ctrl_info] = Formulate_QP(dyn_info,ctrl_info,ref_info,constr_info)
%% Extract Inputs




%% Build QP matrices
%   min Z'*P*Z + c'*Z
%   s.t.
%       alpha*Z  =  beta
%       G*Z     <=  U
Build






end