function value = beziervd( afra, s )
[n, m] = size(afra);
ns = size(s,1);
value=zeros(n,1);
M = m-1;
if M==3
    k=[3 6 3];
elseif M==4
    k=[4 12 12 4];
elseif M==5
    k=[5 20 30 20 5];
elseif M==6
    k=[6 30 60 60 30 6];
elseif M==7
    k=[7 42 105 140 105 42 7];
elseif M==8
    k=[8 56 168 280 280 168 56 8];
elseif M==9
    k=[9 72 252 504 630 504 252 72 9];
else
    k=M*binom(M-1);
end
%%
x = ones(ns, M);
y = ones(ns, M);
for i=1:M-1
    x(:,i+1)=s.*x(:,i);
    y(:,i+1)=(1-s).*y(:,i);
end
idx = 1;
for i=1:n
    value(i) = 0;
    for j=1:M
        value(i) = value(i) + (afra(i,j+1)-afra(i,j))*k(j)*x(idx,j)*y(idx,M+1-j);
    end
    idx = idx+(ns==n);
end
    