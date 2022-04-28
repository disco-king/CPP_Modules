#pragma once

#include <iostream>

class Bureaucrat
{

private:
	const std::string name;
	int grade;
	void checkGrade(int grade);

public:

	Bureaucrat();
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(Bureaucrat const &);
	~Bureaucrat();

	std::string const & getName() const;
	int getGrade() const;

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