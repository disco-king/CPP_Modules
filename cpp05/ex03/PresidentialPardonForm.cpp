#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
target(target){

	setName("Pardon form");
	setGrades(25, 5);
}

PresidentialPardonForm & PresidentialPardonForm::operator=
(PresidentialPardonForm const & src){

	this->target = src.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{

	checkForm(executor);
	
	std::cout << this->target
	<< " has been pardoned by Zaphod Beeblebrox" << std::endl;

}