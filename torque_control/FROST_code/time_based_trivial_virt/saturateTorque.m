function u=saturateTorque(u)
% satValue=[0.6;0.5;0.4;0.2];
satValue=0.45*ones(4,1);
if u(1) >= satValue(1)
    u(1)=satValue(1);
elseif u(1) <=-satValue(1)
    u(1)=-satValue(1);
end

if u(2) >= satValue(2)
    u(2)=satValue(2);
elseif u(2) <=-satValue(2)
    u(2)=-satValue(2);
end

if u(3) >= satValue(3)
    u(3)=satValue(3);
elseif u(3) <=-satValue(3)
    u(3)=-satValue(3);
end

if u(4) >= satValue(4)
    u(4)=satValue(4);
elseif u(4) <=-satValue(4)
    u(4)=-satValue(4);
end
end