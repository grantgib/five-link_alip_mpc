function alpha = TorqueContinuity(in1,in2,s,beta)
%TORQUECONTINUITY
%    ALPHA = TORQUECONTINUITY(IN1,IN2,S,BETA)

%    This function was generated by the Symbolic Math Toolbox version 7.1.
%    21-Jun-2017 10:30:47

u1 = in1(1,:);
u2 = in1(2,:);
u3 = in1(3,:);
u4 = in1(4,:);
u5 = in1(5,:);
u6 = in1(6,:);
u7 = in1(7,:);
u8 = in1(8,:);
u9 = in1(9,:);
u10 = in1(10,:);
u_prev1 = in2(1,:);
u_prev2 = in2(2,:);
u_prev3 = in2(3,:);
u_prev4 = in2(4,:);
u_prev5 = in2(5,:);
u_prev6 = in2(6,:);
u_prev7 = in2(7,:);
u_prev8 = in2(8,:);
u_prev9 = in2(9,:);
u_prev10 = in2(10,:);
t2 = beta.*s;
t3 = exp(t2);
t4 = exp(-t2);
t5 = t4+1.0;
alpha = [t3.*t5.*(u1-u_prev1).*(-1.0./2.0);t3.*t5.*(u2-u_prev2).*(-1.0./2.0);t3.*t5.*(u3-u_prev3).*(-1.0./2.0);t3.*t5.*(u4-u_prev4).*(-1.0./2.0);t3.*t5.*(u5-u_prev5).*(-1.0./2.0);t3.*t5.*(u6-u_prev6).*(-1.0./2.0);t3.*t5.*(u7-u_prev7).*(-1.0./2.0);t3.*t5.*(u8-u_prev8).*(-1.0./2.0);t3.*t5.*(u9-u_prev9).*(-1.0./2.0);t3.*t5.*(u10-u_prev10).*(-1.0./2.0)];
