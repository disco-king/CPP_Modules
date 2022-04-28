#include "Zombie.hpp"

void Zombie::announce(){

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string str){

	this->name = str;
}

Zombie::~Zombie(){

	std::cout << this->name << " is destructed" << std::endl;
}