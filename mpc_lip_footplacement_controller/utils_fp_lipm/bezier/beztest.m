clear; clc; close all;


s = linspace(0,1,1000);


bez_coeffs = [0.000872181
0.000872181
0.000872181
   0.200436
        0.4
        0.4
        0.4]';
    
bez_coeffs2 = [0.000838864
0.000838864
0.000838864
  -0.199581
       -0.4
       -0.4
       -0.4]';



for i = 1:length(s)
    h(i) = bezier(bez_coeffs,s(i));
    h2(i) = bezier(bez_coeffs2,s(i));
end

figure
plot(s,h);
hold on;
plot(s,h2);