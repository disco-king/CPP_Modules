#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

protected:

	std::string const name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
	
	void noEnergy(std::string const & action);
	void noHealth(std::string const & action);

public:

	ClapTrap();
	ClapTrap(std::string const & name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	ClapTrap & operator=(ClapTrap const &);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void displayStatus();

};

#endif