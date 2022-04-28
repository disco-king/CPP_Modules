#include "DiamondTrap.hpp"

int main()
{
{
	DiamondTrap kate("Kate");
	DiamondTrap phillip("Phillip");
	DiamondTrap nemo;

	std::cout << std::endl;

	kate.whoAmI();
	phillip.whoAmI();

	std::cout << std::endl;

	kate.displayStatus();
	phillip.displayStatus();
	nemo.displayStatus();

	std::cout << std::endl;

	nemo.attack("someone");

	std::cout << std::endl;
}
	std::cout << std::endl;
{
	ScavTrap scav("scav");
	FragTrap frag("frag");

	std::cout << std::endl;

	scav.displayStatus();
	frag.displayStatus();

	std::cout << std::endl;
}


	return(0);
}