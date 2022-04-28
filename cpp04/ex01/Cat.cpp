#include "Cat.hpp"

Cat::Cat() {

	std::cout << "Default constructor called for Cat"
	<< std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat() {

	std::cout << "Default destructor called for Cat"
	<< std::endl;
	delete brain;
}

Cat::Cat(Cat const &src) : Animal(src){

	std::cout << "Copy constructor called for Cat"
	<< std::endl;
	this->brain = new Brain();
	*(this->brain) = *(src.brain);
}

Cat & Cat::operator=(Cat const &src){

	if (this->brain == 0)
		this->brain = new Brain();
	*(this->brain) = *(src.brain);
	return *this;
}

void Cat::makeSound() const{

	std::cout << "Idk MEOW or something"
	<< std::endl;
}

std::string const *Cat::checkBrain(int num) const{

	return brain->getIdea(num);
}
