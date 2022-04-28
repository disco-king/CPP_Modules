#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("John_clap_name"),
name("John"){

	std::cout << "Default constructor called for DiamondTrap "
	<< name << std::endl;
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap(name + "_clap_name"),
name(name){

	std::cout << "Constructor called for DiamondTrap "
	<< name << std::endl;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "Default destructor called for DiamondTrap "
	<< name << std::endl;
}

void DiamondTrap::whoAmI(){

	std::cout << "DiamondTrap name " << name << std::endl;
	std::cout << "ClapTrap name " << ClapTrap::name << std::endl;
}