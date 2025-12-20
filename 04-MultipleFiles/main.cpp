#include <iostream>

int getInteger();
int add(int x, int y);


int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << "The sum of " << x << " and " << y << " is: " << add(x, y) << '\n';
	std::cin.get();
}
