function value = bezierv( alpha, s )
[n, m] = size(alpha);
ns = size(s,1);
value=zeros(n,1);
M = m-1;
if M==3
    k=[1 3 3 1];
elseif M==4
    k=[1 4 6 4 1];
elseif M==5
    k=[1 5 10 10 5 1];
elseif M==6
    k=[1 6 15 20 15 6 1];
elseif M==7
    k=[1 7 21 35 35 21 7 1];
elseif M==8
    k=[ 1 8 28 56 70 56 28 8 1];
elseif M==9
    k=[ 1 9 36 84 126 126 84 36 9 1];
else
    k=binom(M);
end
%%
x = ones(ns, M+1);
y = ones(ns, M+1);
for i=1:M
    x(:,i+1)=s.*x(:,i);
    y(:,i+1)=(1-s).*y(:,i);
end
idx = 1;
for i=1:n
    value(i) = 0;
    for j=1:M+1
        value(i) = value(i) + alpha(i, j)*k(j)*x(idx,j)*y(idx,M+2-j);
    end
    idx = idx+(ns==n);
end
    