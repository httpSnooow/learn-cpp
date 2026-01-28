#include <iostream>

void setArrayTo(int value, int values[]) {
    for (int i = 0; i < 5; i++) {
        values[i] = 0;
    }
}

void printArray(int values[]) {
    for (int i = 0; i < 5; i++) {
        std::cout << values[i] << ' ';
    }
    std::cout << '\n';
}

int main() 
{
	int values[5];
	int* ptr = values;
    
    setArrayTo(0,values);
    
    *(ptr + 2) = 6;
    
    printArray(values);
    
    int arraySize = sizeof(values)/sizeof(int);
    
    std::cout << "The array size is: " << arraySize << std::endl;
    
	std::cin.get();
}
