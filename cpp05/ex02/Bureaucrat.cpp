#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw(){

	return "Grade too high";
}


const char* Bureaucrat::GradeTooLowException::what() const throw(){

	return "Grade too low";
}

Bureaucrat::Bureaucrat() : name("Joseph"){

	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) :
name(name){

	if(grade < 1)
		throw GradeTooHighException();
	
	if(grade > 150)
		throw GradeTooLowException();

	this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const & src){

	const_cast<std::string &>(this->name) = src.name;
	this->grade = src.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & src){

	const_cast<std::string &>(this->name) = src.name;
	this->grade = src.grade;
	return *this;
}

std::string const & Bureaucrat::getName() const{
	
	return name;
}

int Bureaucrat::getGrade() const{
	
	return grade;
}

void Bureaucrat::incrementGrade(){

	if(grade == 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade(){

	if(grade == 150)
		throw GradeTooLowException();
	grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src){

	o << src.getName() << ", bureaucrat grade " << src.getGrade();
	return o;
}

void Bureaucrat::signForm(Form & f){

	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << f.getName()
		<< " because " << e.what() << std::endl;
	}
	
}

void Bureaucrat::executeForm(Form const & form){
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed "
		<< form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName()
		<< " because " << e.what() << std::endl;
	}
	
}