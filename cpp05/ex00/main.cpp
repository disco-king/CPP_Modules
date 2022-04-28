#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat phil;
	Bureaucrat pete;
	
	try { phil = Bureaucrat("Phillip", 1); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

	try { pete = Bureaucrat("Peter", 150); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }


	std::cout << phil << std::endl;
	std::cout << pete << std::endl;

	try
	{
		phil.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		pete.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
