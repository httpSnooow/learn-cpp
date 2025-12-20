#include <iostream>

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

char getUserChar() {
	std::cout << "Enter a character (or 'x' to quit): ";
	char character;
	std::cin >> character;
	return character;
}

void printChar(char character, int times) {
	for (int i = 0; i < times; i++) {
		std::cout << character << '\n';
	}
}

int main() {
	char character{ getUserChar() };

	while (character != 'x' && character != 'X') {

		int times{ getUserValue() };
		printChar(character, times);

		std::cout << "----------------\n";

		character = getUserChar();
	}
  
	std::cout << "Quitting program!" << '\n';
}
