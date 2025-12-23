#include <iostream>

char getOperatorFromUser()
{
    std::cout << "Enter a operator or 'X' to exit: ";
    char input{};
    std::cin >> input;

    return input;
}

float getValueFromUser()
{
    std::cout << "Enter a value: ";
    float input{};
    std::cin >> input;

    return input;
}

void printCalculation(float& value1, float value2, char symbol) {
    switch (symbol) {
    case '+':
        value1 += value2;
        std::cout << "The result is: " << value1 << '\n';
        break;

    case '-':
        value1 -= value2;
        std::cout << "The result is: " << value1 << '\n';
        break;

    case '*':
        value1 *= value2;
        std::cout << "The result is: " << value1 << '\n';
        break;

    case '/':
        if (value2 == 0.0) {
            std::cout << "Error: Division by zero!\n";
            break;
        }
        value1 /= value2;
        std::cout << "The result is: " << value1 << '\n';
        break;

    default:
        std::cout << "Error: Invalid operator or value!\n";
        break;
    }
    return;
}

int main()
{
    float value1{ getValueFromUser() };
    char symbol{ getOperatorFromUser() };

    while (symbol != 'X' && symbol != 'x')
    {
        float value2{ getValueFromUser() };

        printCalculation(value1, value2, symbol);

        symbol = getOperatorFromUser();
    }

    std::cout << "Quitting program!" << '\n';

    std::cin.get();
}
