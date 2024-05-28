p = randi(40,5,2)-20;
p(6,:) = p(1,:);

plot(p(:,1),p(:,2))

for i = 1: 5
    m(i) = (p(i+1,2)-p(i,2))/(p(i+1,1)-p(i,1));
    b(i) = p(i,2)-p(i,1)*m(i);
    dominio(i,:) = sort([p(i,1),p(i+1,1)]);
end
se_puede = true; 
x = zeros(5);
for i = 1:5
    for j = 1:5
        if i~=j
            if (m(i) == m(j))
                if (b(i) == b(j))
                    se_puede = false;
                end
            else
                x(i,j) = (b(j)-b(i))/(m(i)-m(j));
            end
        end
    end
end
for i = 1:5
    for j = 1:5
        if i ~= j
            % if (x está ben el primer dominio               && x está en el segundo dominio)
            if (dominio(i,1)-x(i,j)<-0.000000001 && x(i,j)-dominio(i,2)<-0.000000001) && (dominio(j,1)-x(i,j)<-0.000000001 && x(i,j)-dominio(j,2)<-0.000000001)
                se_puede = false;
            end
        end
    end
end
se_puede 