#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
ClapTrap(){
	std::cout << "Default constructor called for ScavTrap "
	<< name << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const & name) :
ClapTrap(name){
	std::cout << "Constructor called for ScavTrap "
	<< name << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap() {

	std::cout << "Default destructor called for ScavTrap "
	<< name << std::endl;
}

void ScavTrap::attack(const std::string& target){

	if (energyPoints == 0)
		return noEnergy("attack");
	if (hitPoints == 0)
		return noHealth("attack");

	std::cout << "ScavTrap " << name 
	<< " attacks " << target << ", causing "
	<< attackDamage << " points of damage!" << std::endl;

	energyPoints--;
}

void ScavTrap::guardGate(){

	static int status;

	if(!status)
		std::cout << "ScavTrap " << name
		<< " entered gatekeeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << name
		<< " exited gatekeeper mode." << std::endl;

	status = status ? 0 : 1;
}