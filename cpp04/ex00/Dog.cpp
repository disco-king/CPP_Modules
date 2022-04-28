#include "Dog.hpp"

Dog::Dog() {

	std::cout << "Default constructor called for Dog"
	<< std::endl;
	type = "Dog";
}

Dog::~Dog() {

	std::cout << "Default destructor called for Dog"
	<< std::endl;
}

Dog::Dog(Dog const &src) : Animal(src){

	std::cout << "Copy constructor called for Dog"
	<< std::endl;
}

Dog & Dog::operator=(Dog const &src){

	this->type = src.type;
	return *this;
}

void Dog::makeSound() const{

	std::cout << "WOOF-WOOF, lol"
	<< std::endl;
}
