#include <iostream>

class Entity {
    
public:
    float X, Y;
    
    Entity() {
        X = 0;
        Y = 0;
    }
    
    void move(float xa, float ya) {
        X += xa;
        Y += ya;
    }
    
    void printLocation() {
        std::cout << "The player location is: " << X << ", " << Y << '\n';
    }
};

class Player : public Entity {
    
public:

    Player(const char* nameString) {
        name = nameString;
    }

    const char* name;

    void printName() {
        std::cout << "The player name is: " << name << '\n';
    }
};


int main()
{
    Player player("Alex");
    player.printName();
    
    player.move(4,5);
    player.printLocation();
    
    std::cin.get();
    
    return 0;
}
