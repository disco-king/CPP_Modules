#include "Zombie.hpp"

int main(){

	int number = 10;
	Zombie *zombie_ptr = zombieHorde(number, "Philip");

	std::cout << std::endl;

	for (int i = 0; i < number; i++)
		zombie_ptr[i].announce();

	std::cout << std::endl;

	delete [] zombie_ptr;
}