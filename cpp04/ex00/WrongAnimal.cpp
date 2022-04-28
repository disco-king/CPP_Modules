#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

	std::cout << "Default constructor called for WrongAnimal"
	<< std::endl;
	type = "An even more terrible, indescribable thing";
}

WrongAnimal::~WrongAnimal() {

	std::cout << "Default destructor called for WrongAnimal"
	<< std::endl; 
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){

	std::cout << "Copy constructor called for WrongAnimal"
	<< std::endl;
	this->type = src.type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & src){

	this->type = src.type;
	return *this;
}

void WrongAnimal::makeSound() const{

	std::cout << "A terrible, indescribable, \
and worst of all, wrong sound" << std::endl;
}

std::string WrongAnimal::getType() const{

	return type;
}
