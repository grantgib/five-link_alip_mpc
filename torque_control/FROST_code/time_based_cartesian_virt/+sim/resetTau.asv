function [params] = resetTau(domain,t0,x0,controller,params)
p=params.ptime;
p(2) = t0;
p(1)=t0+p(1);
params.ptime = p;
end