#include "Zombie.hpp"

int main(){

	Zombie zombie("John");
	Zombie *zombie_ptr = newZombie("Philip");

	zombie.announce();
	(*zombie_ptr).announce();
	zombie_ptr->announce();
	randomChump("Fred");

	delete zombie_ptr;
}