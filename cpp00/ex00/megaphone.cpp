#include <iostream>
#include <iomanip>

char *magnify(char *str)
{
	int i = 0;
	while(str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
	return(str);
}

int main(int argc, char **argv)
{
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	int i = 1;
	char line_end = ' ';
	while(i < argc)
	{
		if(i == argc - 1)
			line_end = '\n';
		std::cout << magnify(argv[i]) << line_end;
		i++;
	}
	return(0);
}
