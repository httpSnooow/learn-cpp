#include <iostream>

int main () {
	int x{}, y{};
	
	std::cout << "Enter a number: " << std::endl;
	std::cin >> x >> y;

	std::cout << "You entered " << x << " and " << y << ".\n";
	
	return 0;
}
