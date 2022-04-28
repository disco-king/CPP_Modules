#include "Karen.hpp"

int main(int argc, char const *argv[])
{
	Karen karen;

	std::cout << std::endl;

	for (int i = 1; i < argc; i++)
		karen.complain(argv[i]);

	/*or just call them in turns*/
	if(argc == 1)
	{
		karen.complain("DEBUG");
		karen.complain("INFO");
		karen.complain("WARNING");
		karen.complain("ERROR");
	}
	return 0;
}
