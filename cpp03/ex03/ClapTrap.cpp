#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("John"){

	std::cout << "Default constructor called for ClapTrap "
	<< name << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string const & name) : name(name){

	std::cout << "Constructor called for ClapTrap " << name << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap() {

	std::cout << "Default destructor called for ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) : name(src.name){

	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & src){

	const_cast<std::string &>(name) = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return *this;
}

void ClapTrap::noEnergy(std::string const & action){

	std::cout << "ClapTrap " << name 
	<< " cannot " << action
	<< "! No energy left!" << std::endl;
}

void ClapTrap::noHealth(std::string const & action){

	std::cout << "ClapTrap " << name 
	<< " cannot " << action
	<< "! No health left!" << std::endl;
}

void ClapTrap::attack(const std::string& target){

	if (energyPoints == 0)
		return noEnergy("attack");
	if (hitPoints == 0)
		return noHealth("attack");

	std::cout << "ClapTrap " << name 
	<< " attacks " << target << ", causing "
	<< attackDamage << " points of damage!" << std::endl;

	energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){

	int damage;
	if(amount >= hitPoints)
		damage = hitPoints;
	else
		damage = amount;

	std::cout << "ClapTrap " << name 
	<< " takes damage, losing "
	<< damage << " hit points!" << std::endl;

	hitPoints -= damage;
}

void ClapTrap::beRepaired(unsigned int amount){

	if (energyPoints == 0)
		return noEnergy("be repaired");
	if (hitPoints == 0)
		return noHealth("be repaired");

	std::cout << "ClapTrap " << name 
	<< " repairs itself, gaining "
	<< amount << " hit points!" << std::endl;
	hitPoints += amount;
	energyPoints--;
}

void ClapTrap::displayStatus(){

	std::cout << "ClapTrap " << name 
	<< " has " << attackDamage << " damage points," << std::endl
	<< hitPoints << " hit points and " << energyPoints << " energy points"
	<< std::endl;
}