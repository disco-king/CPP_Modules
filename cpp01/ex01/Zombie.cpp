#include "Zombie.hpp"

void Zombie::announce(){

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){

	this->name = name;
}


Zombie::Zombie() : name("Default name"){

	this->announce();
}

Zombie::~Zombie(){

	std::cout << this->name << " is destructed" << std::endl;
}