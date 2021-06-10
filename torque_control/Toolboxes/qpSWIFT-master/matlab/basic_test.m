clc;
clear;
% close all;


load('Matrix.mat');

sigma_d = 0.0;
Phi = [P A' G'; A zeros(p ,m + p);G zeros(m,p) -eye(m,m)];

Permut = amd(Phi);


opts.MAXITER = 25;
opts.ABSTOL = 1e-6;
opts.RELTOL = 1e-6;
opts.PERMUT = Permut;
opts.VERBOSE = 0;
 


for i = 1:10
[X(:,i),basic_info,adv_info]  = qpSWIFT(sparse(P),c,sparse(A),beq',sparse(G),h);
% % adv_info
% basic_info
% adv_info
%  Xq = quadprog(P,c,G,h,A,beq);

[X1(:,i),basic_info1,adv_info1] = qpSWIFT(sparse(P),c,sparse(A),beq',sparse(G),h,opts);




if mod(i,1e3) == 0
    disp(i);
end
    
% adv_info1
end



Phi = [P G';G -eye(m,m)];
Permut = amd(Phi);
opts.PERMUT = Permut;


for i = 1:10
    [X2(:,i),basic_info2,adv_info2] = qpSWIFT(sparse(P),c,sparse(G),h);
%     adv_info2
    [X3(:,i),basic_info3,adv_info3] = qpSWIFT(sparse(P),c,sparse(G),h,opts);
%     adv_info3

    
    if mod(i,1e3) == 0
        disp(i);
    end
end