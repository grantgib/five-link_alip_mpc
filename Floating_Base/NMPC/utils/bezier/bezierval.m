function y = bezierval(alpha,s)

[m,n] = size(alpha);

M = n-1;
sum_term = zeros(m,length(s));

if M == 7
	nC = [1 7 21 35 35 21 7 1];
elseif M == 6
	nC = [1 6 15 20 15 6 1];
elseif M == 5
	nC = [1 5 10 10 5 1];
elseif M == 4
	nC = [1 4 6 4 1];
elseif M == 3
	nC = [1 3 3 1];
else
	error(message('Undefined number of M'));
end

for k = 0:M
term_k = (alpha(:,k+1).*nC(k+1))*(s.^k.*(1-s).^(M-k));
sum_term = sum_term+term_k;
end

y = sum_term;