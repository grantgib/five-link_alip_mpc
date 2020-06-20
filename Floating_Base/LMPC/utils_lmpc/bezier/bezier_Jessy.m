function value=bezier_Jessy(a_list,s)
    alpha=a_list;
    [n, m] = size(alpha);
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
    else
        for i=0:M
            k(i+1)=factorial(M)/(factorial(i)*factorial(M-i));
        end
%     else
%         return;
    end
    %%    
    x = ones(1, M+1);
    y = ones(1, M+1);
    for i=1:M
        x(i+1)=s*x(i);
        y(i+1)=(1-s)*y(i);
    end
    for i=1:n
       value(i) = 0;
       for j=1:M+1
          value(i) = value(i) + alpha(i, j)*k(j)*x(j)*y(M+2-j);
       end
    end
end
