#pragma once

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	std::string target;

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const &target);
	~ShrubberyCreationForm();

	virtual void execute(Bureaucrat const & executor) const;

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);
};
