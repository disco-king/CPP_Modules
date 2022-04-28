#include "Karen.hpp"

int main(int argc, char const *argv[])
{
	Karen karen;

	if(argc == 2)
		karen.complain(argv[1]);

	return 0;
}
