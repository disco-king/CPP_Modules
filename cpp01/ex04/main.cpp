#include "Replacer.hpp"
#include <iostream>
#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc != 4)
		return(1);

	Replacer repl(argv[2], argv[3]);

	if(!repl.getFiles(argv[1]))
		repl.Replace();
	else
	{
		std::cerr << "Couldn't open file." << std::endl;
		return 1;
	}

	return 0;
}
