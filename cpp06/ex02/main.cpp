#include "classes.hpp"

int main(int argc, char const *argv[])
{
	Base *b;

	for (int i = 0; i < 3; i++)
	{
		b = generate();

		identify(b);
		identify(*b);

		std::cout << std::endl;
	}

	delete b;
	return 0;
}
