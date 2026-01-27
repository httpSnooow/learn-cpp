#include <iostream>

class Printable {
public:
    virtual const char* getClassName() = 0;
};

class Entity : public Printable {    
public:    
    virtual const char* getName() {return "Entity";}
    const char* getClassName() override { return "Entity";}
};

class Player : public Entity {  
private:
    const char* m_Name;
    
public:
    Player(const char* nameString) {
        m_Name = nameString;
    }

    const char* getName() override { return m_Name; }
    const char* getClassName() override { return "Player";}

};

void print(Printable* obj) {
    std::cout << obj->getClassName() << '\n';
}

int main()
{
    Entity* entity = new Entity();
    //printName(entity);

    Player* player = new Player("Alex");
    //printName(player);
    
    print(entity);
    print(player);
    
    delete entity;
    delete player;
    
    std::cin.get();
    
    return 0;
}
