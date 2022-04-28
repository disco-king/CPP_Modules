#include "Cat.hpp"

Cat::Cat() {

	std::cout << "Default constructor called for Cat"
	<< std::endl;
	type = "Cat";
}

Cat::~Cat() {

	std::cout << "Default destructor called for Cat"
	<< std::endl;
}

Cat::Cat(Cat const &src) : Animal(src){

	std::cout << "Copy constructor called for Cat"
	<< std::endl;
}

Cat & Cat::operator=(Cat const &src){

	this->type = src.type;
	return *this;
}

void Cat::makeSound() const{

	std::cout << "Idk MEOW or something"
	<< std::endl;
}
