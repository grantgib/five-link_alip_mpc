function skew_mat = skewxz(w)
% w is two-dimensional (x and z vector)
wx = w(1);
wz = w(2);
skew_mat = [...
    0, -wz, 0;
    wz, 0, -wx;
    0, wx, 0];
end