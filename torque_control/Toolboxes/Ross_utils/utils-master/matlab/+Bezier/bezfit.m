function [alpha err] = bezfit(s, X, arg3, afixed, W)
    % BEZFIT fit Bezier polynomial to data
    %
    % alpha = bezfit(s, X, M) fits a degree M Bezier polynomial to the data
    % (s, X), where s is a row vector of values in [0, 1] and X is a matrix
    % whose rows correspond to the elements of s. bezfit produces a least 
    % squares fit.
    %
    % alpha = bezfit(s, X, free), where free is a logical row vector of
    % length M+1 such that free(3:end-2) = true fits a degree M Bezier
    % polynomial to the data while optionally constraining the endpoints
    % and the derivatives at the endpoints to exactly match the data.
    %
    % For example,
    %   alpha = bezfit(s, X, [0 0 1 1 1 1 1 0]); 
    % fits a Bezier polynomial to the data (s,X) such that the endpoints
    % exactly match the data and the derivative of the best fit polynomial
    % exactly matches the (estimated) derivative of X at s=0. Since
    % free(end-1) is true, the derivative at the end (s=1) is NOT
    % constrained (i.e., it is free).
    %
    % alpha = bezfit(s, X, free, afixed) where free is a logical row vector
    % of length M+1 and fixed is a matrix with sum(~free) elements. If
    % free(i) is true, alpha(i-1) is estimated; the remaining coefficients
    % are taken from fixed.
    %
    % The procedure relies on an expression of a degree M Bezier polynomial
    % with coefficients alpha0, alpha1, ..., alphaM as
    %
    %   b(s) = [alpha0 ... alphaM]*B*Q*[s^M s^(M-1) s^(M-2) ... s 1]'
    %
    % where
    %   Q = diag((-1).^(0:M))*P*diag((-1).^(0:M)),
    %   P = pascal(M+1,1) is a lower triangular Cholesky factor of the 
    %   (M+1)-th Pascal matrix, and
    %   B = fliplr(diag([nchoosek(M,M) nchoosek(M,M-1) ... nchoosek(M,0)]))
    %   is a lr-flipped diagonal matrix with the binomial coefficients MCk,
    %   k=M,...,0.
    
    if isscalar(arg3)
        M = arg3;
        free = true(1,M+1);
        afixed = zeros(size(X,1), 0);
    else
        free = logical(arg3);
        M = length(free)-1;
        if nargin<4 || isempty(afixed)
            afixed = getfixed(s, X, M, free);
        end
    end
    
    P = pascal(M+1,1);
    Q = diag((-1).^(0:M))*P*diag((1).^(0:M));
    B = fliplr(diag(Bezier.binom(M)));
    R = B*Q*bsxfun(@power, s, (M:-1:0)');
    X0 = afixed*R(~free,:);
    if nargin==5 && ~isempty(W)
        afree = lscov(R(free,:).', (X-X0).', W).';
    else
        afree = (X-X0)/R(free,:);
    end
    alpha = zeros(size(X,1), M+1);
    alpha(:,free) = afree;
    alpha(:,~free) = afixed;
    
    if nargout>1
        err = sqrt(sum((afree*R(free,:) - (X-X0)).^2,2));
    end
end


function afixed = getfixed(s, X, M, free)
    if any(~free(3:end-2))
        error('BEZFIT cannot constrain control points a2, ..., a{M-2}')
    elseif (free(1) && ~free(2)) || (~free(M) && free(M+1))
        error(['BEZFIT cannot constrain an interior point a1 or a{M-1}'...
            'without also constraining the corresponding endpoint a0 or aM.']);
    elseif (~free(1) && s(1)~=0) || (~free(end) && s(end)~=1)
        error('s must start at 0 and end at 1 in order to constrain endpoints.');
    end
    
    n = size(X,1);
    alpha0   = zeros(n,0);
    alpha1   = alpha0;
    alphaMm1 = alpha0;
    alphaM   = alpha0;
    
    if ~free(1)
        alpha0 = X(:,1);
        
        if ~free(2)
            db = (X(:,2)-alpha0)/(s(2)-s(1));
            alpha1 = alpha0 + db/M;
        end
    end
    if ~free(M+1)
        alphaM = X(:,end);
        
        if ~free(M)
            db = (alphaM-X(:,end-1))/(s(end)-s(end-1));
            alphaMm1 = alphaM - db/M;
        end    
    end
    
    afixed = [alpha0 alpha1 alphaMm1 alphaM];
end

