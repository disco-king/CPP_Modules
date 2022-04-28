#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

private:
	const std::string name;
	int grade;

public:

	Bureaucrat();
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(Bureaucrat const &);
	~Bureaucrat();

	std::string const & getName() const;
	int getGrade() const;
	void signForm(Form &);
	void executeForm(Form const & form);

	class GradeTooHighException;
	class GradeTooLowException;

	void incrementGrade();
	void decrementGrade();

	Bureaucrat & operator=(Bureaucrat const &);

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);

class Bureaucrat::GradeTooLowException : public std::exception
{
public:
	virtual const char* what() const throw();
};

class Bureaucrat::GradeTooHighException : public std::exception
{
public:
	virtual const char* what() const throw();
};