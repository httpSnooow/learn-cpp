#include <iostream>

void printOdd(int value)
{
	std::cout << "Odd numbers between 0 and " << value << ":\n";

	for (int i = 0; i <= value; i++)
	{
		if (i % 2 == 0)
			continue;
		std::cout << i << '\n';
	}
}

void printEven(int value)
{
	std::cout << "Even numbers between 0 and " << value << ":\n";

	for (int i = 0; i <= value; i++)
	{
		if (i % 2 != 0)
			continue;
		std::cout << i << '\n';
	}
}

void printLowerThan10(int value)
{
	std::cout << "numbers between 0 and " << value << " that are lower than 10:\n";

	for (int i = 0; i <= value; i++)
	{
		if (i >= 10)
			break;
		std::cout << i << '\n';
	}
}

int getUserValue() {
	std::cout << "Enter a Value: ";
	int value{};
	std::cin >> value;

	if (value <= 0) {
		std::cout << "Value must be a positive number. Defaulting to 1.\n";
		value = 1;
	}
	return value;
}

int main() 
{
	int value{ getUserValue() };

	printOdd(value);

	std::cout << "=======================\n";

	printEven(value);

	std::cout << "=======================\n";

	printLowerThan10(value);

	std::cin.get();

}
