#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw(){

	return "Grade too high";
}


const char* Form::GradeTooLowException::what() const throw(){

	return "Grade too low";
}

const char* Form::FormNotSignedException::what() const throw(){

	return "Form not signed";
}


Form::Form() :
name("some form"), signGrade(1), executeGrade(1) {
	formSigned = false;
}

Form::Form(std::string const & name, int sign, int execute) :
name(name), signGrade(sign), executeGrade(execute)
{
	if(sign < 1 || execute < 1)
		throw GradeTooHighException();

	if(sign > 150 || execute > 150)
		throw GradeTooLowException();

	formSigned = false;
}

Form::~Form() {}

Form::Form(Form const & src) :
name(src.name), signGrade(src.signGrade),
executeGrade(src.executeGrade) {}

Form &Form::operator=(Form const & src){

	const_cast<std::string &>(this->name) = src.name;
	const_cast<int &>(this->signGrade) = src.signGrade;
	const_cast<int &>(this->executeGrade) = src.executeGrade;
	return *this;
}

void Form::beSigned(Bureaucrat const & crat){

	if(crat.getGrade() > this->signGrade)
		throw GradeTooLowException();
	this->formSigned = true;
}

std::string const &Form::getName() const{

	return this->name;
}

void Form::setName(std::string const & name){

	const_cast<std::string &>(this->name) = name;
}

int Form::getExGrade() const{

	return this->executeGrade;
}

int Form::getSignGrade() const{

	return this->signGrade;
}

void Form::setGrades(int sign, int execute){

	const_cast<int &>(this->signGrade) = sign;
	const_cast<int &>(this->executeGrade) = execute;
}

void Form::checkForm(Bureaucrat const & executor) const {

	if(!this->formSigned)
		throw FormNotSignedException();

	if(this->getExGrade() < executor.getGrade())
		throw GradeTooLowException();
}

bool Form::getSigned() const{

	return this->formSigned;
}


std::ostream & operator<<(std::ostream & o, Form const & src){

	o << "Form name \"" << src.getName() << "\", sign grade "
	<< src.getSignGrade() << ", execute grade " << src.getExGrade();
	return o;
}