#include <iostream>

int main () {
	int x{}, y{};
	
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> x >> y;

	std::cout << "You entered " << x << " and " << y << ".\n";
	
	std::cin.get();
}
