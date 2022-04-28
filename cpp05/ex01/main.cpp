#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat phil;
	Bureaucrat pete;

	try{ phil = Bureaucrat("Phillip", 1); }
	catch(std::exception &e) { std::cout << e.what() << std::endl; }
	
	try{ pete = Bureaucrat("Peter", 150); }
	catch(std::exception &e) { std::cout << e.what() << std::endl; }
	
	std::cout << std::endl;

	Form form;

	try
	{
		form = Form("28C-P7.9", 50, 150);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << std::endl;

	std::cout << phil << std::endl;
	std::cout << pete << std::endl;
	std::cout << form << std::endl;

	std::cout << std::endl;

	phil.signForm(form);
	pete.signForm(form);

	return 0;
}
