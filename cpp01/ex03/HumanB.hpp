#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{

	Weapon *weapon_p;
	std::string name;

public:

	HumanB(std::string);

	void setWeapon(Weapon &);
	void attack();

};

#endif