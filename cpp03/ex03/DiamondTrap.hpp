#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :
public ScavTrap, public FragTrap
{

private:

	std::string const name;

public:

	DiamondTrap();
	DiamondTrap(std::string const & name);
	~DiamondTrap();

	using ClapTrap::displayStatus;

	void whoAmI();
};

#endif