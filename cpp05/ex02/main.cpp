#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat phil;
	ShrubberyCreationForm form1("office_");
	RobotomyRequestForm form2("Stacy");
	PresidentialPardonForm form3("Frink Malphite, the intergalactic criminal");

	std::cout << std::endl;

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;

	std::cout << std::endl;

	try { phil = Bureaucrat("Phillip", 5);}
	catch(std::exception &e){ std::cout << e.what() << std::endl; }

	try { phil.signForm(form1); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	try { phil.signForm(form2); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	try { phil.signForm(form3); }
	catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

	std::cout << std::endl;

	try { phil.executeForm(form1); }
	catch(const std::exception& e){ std::cerr << e.what() << '\n'; }

	std::cout << std::endl << "=================" << std::endl << std::endl;

	try { phil.executeForm(form2); }
	catch(const std::exception& e){ std::cerr << e.what() << '\n'; }

	std::cout << std::endl << "=================" << std::endl << std::endl;

	try { phil.executeForm(form3); }
	catch(const std::exception& e){ std::cerr << e.what() << '\n'; }

	std::cout << std::endl;


	return 0;
}
