#include <iostream>
int main()
{
    int mode = -1;
    std::cout << "Welcome to the calculator of doom";
    std::cout << "What mode would you like \n press 1 for divide\n press 2 for multiply \n press 3 for add "
                 "\n press 4 for subtract \n press 5 for square";
    std::cin >>mode;
    //
    if (mode != 5) {
        float num1;
        float num2;
        std::cout << "Enter your first number";
        std::cin >> num1;
        std::cout<<"Enter your second number";
        std::cin >> num2;
        float output;
        switch (x) {
            case 1:
                output = num1/num2;
            case 2:
                output = num1 * num2;
            case 3:
                output = num1 + num2;
            case 4

        }
    }

    return 0;
}

