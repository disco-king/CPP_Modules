#include "Fixed.hpp"

Fixed::Fixed(){

	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(Fixed const & src){

	std::cout << "Copy assignment operator called" << std::endl;
	this->value = src.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const{

	std::cout << "getRawBits member funtion called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw){

	std::cout << "setRawBits member funtion called" << std::endl;
	this->value = raw;
}