#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {

	std::string name;

public:

	Zombie(std::string);
	~Zombie();

	void announce();

};

Zombie* newZombie(std::string);
void randomChump(std::string name);

#endif