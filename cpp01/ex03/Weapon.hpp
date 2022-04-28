#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{

	std::string type;

public:

	Weapon(std::string);

	std::string const & getType(void);
	void setType(std::string);

};

#endif