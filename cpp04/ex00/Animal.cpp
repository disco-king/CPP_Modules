#include "Animal.hpp"

Animal::Animal() {

	std::cout << "Default constructor called for Animal"
	<< std::endl;
	type = "A terrible, indescribable thing";
}

Animal::~Animal() {

	std::cout << "Default destructor called for Animal"
	<< std::endl; 
}

Animal::Animal(Animal const & src){

	std::cout << "Copy constructor called for Animal"
	<< std::endl;
	this->type = src.type;
}

Animal &Animal::operator=(Animal const & src){

	this->type = src.type;
	return *this;
}

void Animal::makeSound() const{

	std::cout << "A terrible, indescribable sound"
	<< std::endl;
}

std::string Animal::getType() const{

	return type;
}
