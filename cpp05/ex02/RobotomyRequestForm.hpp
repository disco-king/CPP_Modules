#pragma once

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

	std::string target;

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm();

	virtual void execute(Bureaucrat const & executor) const;

	RobotomyRequestForm & operator=(RobotomyRequestForm const &);
};