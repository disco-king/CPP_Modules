#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		int i = 0; Bureaucrat phil("James", 0);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		// i++;
	}

	return 0;
}
