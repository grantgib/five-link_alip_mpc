function value = bezierva( alpha, s )
[n, m] = size(alpha);
ns = size(s,1);
value=zeros(n,1);
M = m-1;
if M==3
    k=[6 6];
elseif M==4
    k=[12 24 12];
elseif M==5
    k = [20 60 60 20];
elseif M==6
    k=[30 120 180 120 30];
elseif M==7
    k=[42 210 420 420 210 42];
elseif M==8
    k=[56 336 840 1120 840 336 56];
elseif M==9
    k=[72 504 1512 2520 2520 1512 504 72 ];
else
    k=M*(M-1)*binom(M-2);
end
%%
x = ones(ns, M-1);
y = ones(ns, M-1);
for i=1:M-2
    x(:,i+1)=s.*x(:,i);
    y(:,i+1)=(1-s).*y(:,i);
end
idx = 1;
for i=1:n
   value(i) = 0;
   for j=1:M-1
      value(i) = value(i) + (alpha(i,j+2)-2*alpha(i,j+1)+alpha(i,j)) *k(j)*x(idx,j)*y(idx,M-j);
   end
   idx = idx+(ns==n);
end
  