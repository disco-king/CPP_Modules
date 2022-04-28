#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

protected:
	unsigned int hitPoints;
	unsigned int attackDamage;

public:

	FragTrap();
	FragTrap(std::string const & name);
	~FragTrap();

	void highFivesGuys();

};

#endif