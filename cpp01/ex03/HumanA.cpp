#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
weapon_r(weapon){

	this->name = name;
}

void HumanA::attack(){

	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon_r.getType() << std::endl;
}