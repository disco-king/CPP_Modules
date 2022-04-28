#include "FragTrap.hpp"

FragTrap::FragTrap() :
ClapTrap(){
	std::cout << "Default constructor called for FragTrap "
	<< name << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string const & name) :
ClapTrap(name){
	std::cout << "Constructor called for FragTrap "
	<< name << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap() {

	std::cout << "Default destructor called for FragTrap "
	<< name << std::endl;
}

void FragTrap::highFivesGuys(){


		std::cout << "FragTrap " << name
		<< " basically just gives everyone a high five." << std::endl;
}
