#pragma once

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{

	std::string target;

public:

	PresidentialPardonForm();
	PresidentialPardonForm(std::string const &target);
	~PresidentialPardonForm();

	virtual void execute(Bureaucrat const & executor) const;

	PresidentialPardonForm & operator=(PresidentialPardonForm const &);
};
