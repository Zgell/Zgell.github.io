% Made by Zachary Gellner
% Started On: Jan 16th 2020

clear;
clc;

disp("========================")
disp("= Pi Approximator v1.0 =")
disp("========================")

iter = double(1); %Number of iterations
usermax = input('How many iterations do you want to do? ');
userdigits = input('How many digits do you want to display? ');

if userdigits <= 2 %Too low, could cause VPA error, set to 8 by default
    userdigits = 8;
end
digits(userdigits);

%while iter < usermax %Add if iter is odd, subtract if iter is even
%    if uint32(iter / 2)*2 == uint32(iter) %If iter is even
%        approx = approx - (1 / ((2 * iter) - 1));
%    end
%    if uint32(iter / 2)*2 ~= uint32(iter) %If iter is odd
%        approx = approx + (1 / ((2 * iter) - 1));
%    end
%    iter = iter + 1;
%end

pi_estimate = 4 * approximate(usermax);

plotx = linspace(10, usermax, 50);
ploty = arrayfun(@(a) approximate(a), plotx);
ploty = 4 * ploty;
plotz = arrayfun(@(a) accuracy(a), ploty);

disp("Your approximation is:")
disp(vpa(pi_estimate, userdigits));
disp("Accuracy of Pi:")
disp(vpa(accuracy(pi_estimate), userdigits))

plot(plotx, ploty, '-ok', plotx, plotz, '-or');
title("Number of Algorithm Iterations vs Value of Pi");
xlabel("Number of Iterations");
grid on;
legend('Value of Pi', 'Accuracy of Pi')

function pi_accuracy = accuracy(x)
    pi_accuracy = log(1 / abs(1-(x/pi)));
end

function pi_approx = approximate(max_iter)
    iterations = 1;
    pi_approx = 0;
    while iterations < max_iter %Add if iter is odd, subtract if iter is even
        if uint32(iterations / 2)*2 == uint32(iterations) %If iter is even
            pi_approx = pi_approx - (1 / ((2 * iterations) - 1));
        end
        if uint32(iterations / 2)*2 ~= uint32(iterations) %If iter is odd
            pi_approx = pi_approx + (1 / ((2 * iterations) - 1));
        end
        iterations = iterations + 1;
    end
end