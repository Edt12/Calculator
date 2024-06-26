#include <iostream>
int main()
{
    int mode = -1;
    std::cout << "Welcome to the calculator of doom";
    std::cout << "What mode would you like \n press 1 for divide\n press 2 for multiply \n press 3 for add "
                 "\n press 4 for subtract \n press 5 for square";
    std::cin >>mode;
    //After taking in what mode it decides whether that mode needs two numbers or not
    if (mode != 5) {
        float num1;
        float num2;
        std::cout << "Enter your first number\n";
        std::cin >> num1;
        std::cout<<"Enter your second number\n";
        std::cin >> num2;
        float output;
        switch (mode) {
            case 1:
                output = num1/num2;
            break;
            case 2:
                output = num1 * num2;
            break;
            case 3:
                output = num1 + num2;
            break;
            case 4:
                output = num1 - num2;
            break;
            default:
                output = -1;
            break;
        }

        std::cout << "OUTPUT\n" << output;

        }
    else {
            float number;
            std::cout << "Please enter your number\n";
            std::cin >> number;
            std::cout << number * number;
        }

    return 0;
}

