#include <iostream>
#include <string>

void printString(const std::string& string){
    std::cout << string << std::endl;
}

int main() 
{   /*
    const char* name = "Guilherme";
    char name2[10] {'G','u','i','l','h','e','r','m','e','\0'};
    
    std::cout << name << std::endl;
    std::cout << name2 << std::endl;
    */
    
    std::string name = "Guilherme";
    name += " Eduardo";
    
    //std::string name = std::string("Guilherme") + " Eduardo";
    
    printString(name);
    std::cout << "The string length is: " << name.size() << std::endl; 

    bool cointains = name.find("me") != std::string::npos;
    std::cout << "Name cointains 'me'? " << (cointains ? "Yes": "No") << std::endl;
}
