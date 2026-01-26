#include <iostream>

class player
{
    float X, Y;
    
public:

    player() {
        std::cout << "Created object!" << '\n';
    }

	player(float x, float y) {
	    X = x;
	    Y = y;
	    
        std::cout << "Created object!" << '\n';
	}
	
	void printLocation() {
    std::cout << "player location: " << X << ", " << Y <<'\n';
	}
	
	~player() {
        std::cout << "Destroyed object!" << '\n';
    }
	
};

int main()
{
	player p1(-32.832529,-43.034752);
	p1.printLocation();

	std::cin.get();
}
