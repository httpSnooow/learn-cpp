#include <iostream>

class Entity {
    
public:
    
    virtual const char* getName() { return "Entity"; }
    
};

class Player : public Entity {
    
private:
    
    const char* m_Name;
    
public:

    Player(const char* nameString) {
        m_Name = nameString;
    }
    
    const char* getName() override { return m_Name; }

};

void printName(Entity* entity) {
    
    std::cout << entity->getName() << '\n';
}

int main()
{
    Entity* entity = new Entity();
    printName(entity);

    Player* player = new Player("Alex");
    printName(player);
    
    delete entity;
    delete player;
    
    std::cin.get();
    
    return 0;
}
