#include <iostream>

void printCalculation(float value1, float value2, char symbol) {

    switch (symbol) {
    case '+':
        std::cout << "The result is: " << value1 + value2 << '\n';
        return; 

    case '-':
        std::cout << "The result is: " << value1 - value2 << '\n';
        return;

    case '*':
        std::cout << "The result is: " << value1 * value2 << '\n';
        return;

    case '/':
        if (value2 == 0.0) {
            std::cout << "Error: Division by zero!\n";
            return;
        }

        std::cout << "The result is: " << value1 / value2 << '\n';
        return;

    default:
        std::cout << "Error: Invalid operator or value!\n";
        return;
    }
}

int main()
{
    float value1{}, value2{};
    char symbol;

    std::cout << "Enter two values:\n";
    std::cin >> value1 >> value2;

    std::cout << "Enter an operator:\n";
    std::cin >> symbol;

    printCalculation(value1, value2, symbol);

    return 0;
}
