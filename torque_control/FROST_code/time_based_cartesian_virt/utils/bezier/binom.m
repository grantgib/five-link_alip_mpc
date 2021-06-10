function b = binom(n)
    % BINOM compute a vector of binomial coefficients
    %#codegen
    b = [1 zeros(1,n)];
    for k=1:n
        b = b + [0 b(1:end-1)];
    end
end
