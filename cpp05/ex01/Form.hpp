#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:
	const std::string name;
	const int signGrade;
	const int executeGrade;
	bool formSigned;

public:

	Form();
	Form(std::string const & name, int sign, int execute);
	Form(Form const &);
	~Form();

	Form & operator=(Form const &);

	std::string const &getName() const;
	int getExGrade() const;
	int getSignGrade() const;
	bool getSigned() const;
	void beSigned(Bureaucrat const & crat);

	class GradeTooHighException;
	class GradeTooLowException;
};

std::ostream & operator<<(std::ostream & o, Form const & src);

class Form::GradeTooLowException : public std::exception
{
public:
	virtual const char* what() const throw();
};

class Form::GradeTooHighException : public std::exception
{
public:
	virtual const char* what() const throw();
};
