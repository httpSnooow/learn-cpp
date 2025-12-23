#include <iostream>

class Player
{
public:
	int coorX{}, coorY{};
	float moveSpeed{ 1 };

	void move(int xa, int ya)
	{
		coorX += (int)(xa * moveSpeed);
		coorY += (int)(ya * moveSpeed);

		printPosition();
	}

	void printPosition() {
		std::cout << "Player is at: " << coorX << ", " << coorY << '\n';
	}
};

int main()
{
	Player player;

	player.printPosition();
	player.move(2, - 1);

	std::cin.get();
}
