#include "ScavTrap.hpp"

int main()
{
	int damage = 20;
	int healing = 30;

	ScavTrap st1("Karl");
	ScavTrap st2("Michael");

	// std::cout << std::endl;

	// for (int i = 0; i < 5; i++)
	// {
	// 	st1.attack("Michael");
	// 	st2.takeDamage(damage);
	// }

	// st2.beRepaired(healing);

	// std::cout << std::endl;

	// st1.displayStatus();
	// st2.displayStatus();
	// // st1 = st2;
	// st1.displayStatus();
	// std::cout << std::endl;
	// st1.guardGate();
	// st1.guardGate();


	ClapTrap *ctp = &st1;
	ctp->attack("Michael");
	// ctp->guardGate();
	st1.guardGate();

	st2.takeDamage(damage);
	st2.beRepaired(healing);

	std::cout << std::endl;

	st2.displayStatus();

	std::cout << std::endl;

	return 0;
}
