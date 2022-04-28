#include "Intern.hpp"

Intern::Intern() {
	names[0] = "Shrub";
	names[1] = "Robo";
	names[2] = "Pardon";

	functions[0] = &Intern::makeShrub;
	functions[1] = &Intern::makeRob;
	functions[2] = &Intern::makePar;
}

Intern::~Intern() {}

Intern::Intern(Intern const & src){
	for (int i = 0; i < 3; i++)
		this->names[i] = src.names[i];
}

Intern &Intern::operator=(Intern const & src){
	for (int i = 0; i < 3; i++)
		this->names[i] = src.names[i];
	return *this;
}

Form *Intern::makeShrub(std::string target){

	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRob(std::string target){

	return new RobotomyRequestForm(target);
}

Form *Intern::makePar(std::string target){

	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string form, std::string target)
{
	for (int i = 0; i < 3; i++)
		if(names[i] == form)
		{
			std::cout << "Intern creates " << form << std::endl;
			return (this->*functions[i])(target);
		}
	std::cout << "Couldn't make form ;(" << std::endl;
	return 0;
}