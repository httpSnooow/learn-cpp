#include <iostream>

float getValueFromUser()
{
    std::cout << "Enter a value: ";
    float input{};
    std::cin >> input;

    return input;
}

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
    float value1{ getValueFromUser() };
    float value2{ getValueFromUser() };
    char symbol;

    std::cout << "Enter an operator:\n";
    std::cin >> symbol;

    printCalculation(value1, value2, symbol);

    return 0;
}
