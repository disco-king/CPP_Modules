#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name){

	this->name = name;
	this->weapon_p = 0;
}

void HumanB::attack(){
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon_p->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){

	this->weapon_p = &weapon;
}