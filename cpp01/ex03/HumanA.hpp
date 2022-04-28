#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{

	Weapon &weapon_r;
	std::string name;

public:

	HumanA(std::string, Weapon &);

	void attack();

};

#endif