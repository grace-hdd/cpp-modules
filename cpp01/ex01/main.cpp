#include "Zombie.hpp"

int main(void)
{
	int N;
	std::cout << "Enter the number of zombies you want to create: ";
	std::cin >> N;

	std::string name;
	std::cout << "Enter a zombie name: ";
	std::cin >> name;

	Zombie* horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}

	delete[] horde;

	return 0;
}