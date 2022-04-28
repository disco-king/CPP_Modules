#include "Dog.hpp"

Dog::Dog() {

	std::cout << "Default constructor called for Dog"
	<< std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog() {

	std::cout << "Default destructor called for Dog"
	<< std::endl;
	delete brain;
}

Dog::Dog(Dog const &src) : Animal(src){

	std::cout << "Copy constructor called for Dog"
	<< std::endl;
	this->brain = new Brain();
	*(this->brain) = *(src.brain);
}

Dog & Dog::operator=(Dog const &src){

	if (this->brain == 0)
		this->brain = new Brain();
	*(this->brain) = *(src.brain);
	return *this;
}

void Dog::makeSound() const{

	std::cout << "WOOF-WOOF, lol"
	<< std::endl;
}

std::string const *Dog::checkBrain(int num) const{

	return brain->getIdea(num);
}
