#include <iostream>

int main() 
{
	int value{ 8 };
	int* ptr{ &value };

	std::cout << "The variable value has the content (value): " << value << '\n';
	std::cout << "The address of value is (&value): " << &value << '\n';

	std::cout << "The variable ptr has the content (ptr): " << ptr << '\n';
	std::cout << "The address of ptr is (&ptr): " << &ptr << '\n';

	*ptr = 20;

	std::cout << "The variable changes it value to (value): " << value << '\n';

	std::cout << "\n===============================================\n\n";

	char* buffer{ new char[9] };
	memset(buffer, 'a', 8);
	buffer[8] = '\0';

	// C++: When a char pointer is sent to cout, it treats it as a STRING 
	// and prints characters starting from that address UNTIL it finds a null terminator (\0).
	// Unlike other pointers (int*, void*), which print the memory address.
	std::cout << "The variable buffer has the content (buffer): " << buffer << '\n';
	std::cout << "The address of the content in buffer is (heap) ((void*)buffer):  " << (void*)buffer << '\n';
	std::cout << "The address of buffer is (stack) (&buffer): " << &buffer << '\n';
	std::cout << "In the first adress of the variable buffer has the content (*buffer): " << *buffer << '\n';

	delete[] buffer;

	std::cin.get();
}
