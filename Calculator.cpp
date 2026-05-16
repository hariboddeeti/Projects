#include <iostream>
//namespace std;
int main()
{
    // Declare variables to hold the two numbers and the result
    double num1, num2, result;
    char operation;

    // Prompt the user for input
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    // Perform the calculation based on the operation
    switch (operation)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else
            {
                std::cout << "Error: Division by zero!" << std::endl;
                return 0;
            }
            break;
        default:
            std::cout << "Error: Invalid operation!" << std::endl;
            return 0;
    }

    // Output the result
    std::cout << "Result: " << result << std::endl;
    return 0;
}