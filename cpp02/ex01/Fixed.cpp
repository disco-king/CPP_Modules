#include "Fixed.hpp"

Fixed::Fixed(){

	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int num) {

	std::cout << "Int constructor called" << std::endl;
	this->value = num << this->fractionalBits;
}

Fixed::Fixed(const float num) {

	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(num * (1 << fractionalBits));
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

	return this->value;
}

void Fixed::setRawBits(int const raw){

	this->value = raw;
}

float Fixed::toFloat(void) const{

	float ret = this->value;
	return ret / (1 << fractionalBits);
}

int Fixed::toInt(void) const{

	return this->value / (1 << this->fractionalBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & src){

	o << src.toFloat();
	return o;
}