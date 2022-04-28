#include "FragTrap.hpp"

int main()
{
	int damage = 30;
	int healing = 30;

	FragTrap st1("Karl");
	FragTrap st2("Michael");

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		st1.attack("Michael");
		st2.takeDamage(damage);
	}

	st2.beRepaired(healing);

	std::cout << std::endl;

	st1.displayStatus();
	st2.displayStatus();
	// st1 = st2;
	// st1.displayStatus();
	std::cout << std::endl;
	st1.highFivesGuys();

	// FragTrap st3(st1);

	// std::cout << std::endl;

	// st2.attack("Karl");
	// st3.takeDamage(damage);
	// st2 = st3;
	// st3.beRepaired(healing);

	// std::cout << std::endl;

	// st2.displayStatus();
	// st3.displayStatus();

	std::cout << std::endl;

	return 0;
}
