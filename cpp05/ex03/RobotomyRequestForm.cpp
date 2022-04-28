#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
target(target){

	setName("Robotamy form");
	setGrades(72, 45);
}

RobotomyRequestForm & RobotomyRequestForm::operator=
(RobotomyRequestForm const & src){

	this->target = src.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{

	checkForm(executor);

	std::cout << "BRRRRRRRRRRRRR" << std::endl << std::endl;
	std::cout << "BRRRRRRRRRRRRR" << std::endl << std::endl;
	std::cout << "BRRRRRRRRRRRRR" << std::endl << std::endl;
	std::cout << "BRRRRRRRRRRRRR" << std::endl << std::endl;
	
	if(rand() % 2)
	{
		std::cout << this->target << " has been robotomized succesfully"
		<< std::endl << std::endl;
	}
	else
		std::cout << "robotomy failed" << std::endl;

}
