#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct1("Karl");
	ClapTrap ct2("Michael");

	std::cout << std::endl;

	for (int i = 0; i < 11; i++)
	{
		ct1.attack("Michael");
	}

	ct2.beRepaired(5);

	std::cout << std::endl;

	ct1.displayStatus();
	ct2.displayStatus();
	ct1 = ct2;
	ct1.displayStatus();
	std::cout << std::endl;
	
	return 0;
}
