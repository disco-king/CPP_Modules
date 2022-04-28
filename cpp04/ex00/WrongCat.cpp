#include "WrongCat.hpp"

WrongCat::WrongCat() {

	std::cout << "Default constructor called for WrongCat"
	<< std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat() {

	std::cout << "Default destructor called for WrongCat"
	<< std::endl;
}

void WrongCat::makeSound() const{

	std::cout << "I should say MEOW, but I'm really not sure"
	<< std::endl;
}
