#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat phil;
	Intern max;

	Form *form1 = max.makeForm("Shrub", "office");
	Form *form2 = max.makeForm("Robo", "Justin");
	Form *form3 = max.makeForm("Pardon", "Miranda the Terrible, Fatshamer of Worlds");
	Form *form4 = max.makeForm("Unexistant form", "Gonna be unused");

	std::cout << std::endl;

	std::cout << *form1 << std::endl;
	std::cout << *form2 << std::endl;
	std::cout << *form3 << std::endl;

	std::cout << std::endl;

	try { phil = Bureaucrat("Phillip", 5);}
	catch(std::exception &e){ std::cout << e.what() << std::endl; }

	try { phil.signForm(*form1); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	try { phil.signForm(*form2); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	try { phil.signForm(*form3); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

	std::cout << std::endl;

	try { phil.executeForm(*form1); }
	catch(const std::exception& e){ std::cerr << e.what() << '\n'; }

	std::cout << std::endl << "=================" << std::endl << std::endl;

	try { phil.executeForm(*form2); }
	catch(const std::exception& e){ std::cerr << e.what() << '\n'; }

	std::cout << std::endl << "=================" << std::endl << std::endl;

	try { phil.executeForm(*form3); }
	catch(const std::exception& e){ std::cerr << e.what() << '\n'; }

	std::cout << std::endl << "=================" << std::endl << std::endl;

	if(!form4)
		std::cout << "Yup, it's null!" << std::endl;

	std::cout << std::endl;


	return 0;
}
