#include "Fixed.hpp"

double mpow(double val, double pow){

	double step = val;
	for (int i = 1; i < pow; i++)
		val = val * step;
	return val;
}

Fixed::Fixed(){

	// std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int num) {

	// std::cout << "Int constructor called" << std::endl;
	this->value = num << this->fractionalBits;
}

Fixed::Fixed(const float num) {

	// std::cout << "Float constructor called" << std::endl;
	this->value = roundf(num * (1 << fractionalBits));
}

Fixed::Fixed(Fixed const &src) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {

	// std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(Fixed const & src){

	// std::cout << "Copy assignment operator called" << std::endl;
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

Fixed & Fixed::operator++(){

	this->value++;
	return *this;
}

Fixed Fixed::operator++(int){

	Fixed ret(*this);
	++(*this);
	return ret;
}

Fixed & Fixed::operator--(){

	this->value--;
	return *this;
}

Fixed Fixed::operator--(int){

	Fixed ret(*this);
	--(*this);
	return ret;
}

Fixed Fixed::operator+(Fixed const & src) const{

	Fixed ret;
	ret.value = this->value + src.value;
	return ret;
}

Fixed Fixed::operator-(Fixed const & src) const{

	Fixed ret;
	ret.value = this->value - src.value;
	return ret;
}

Fixed Fixed::operator*(Fixed const& src) const{
	Fixed ret;
	ret.value = (this->value * src.getRawBits()) / mpow(2, fractionalBits);
	return ret;
}

Fixed Fixed::operator/(Fixed const & src) const{

	Fixed ret;
	ret.setRawBits(this->value * mpow(2, fractionalBits) / src.getRawBits());
	return ret;
}

bool Fixed::operator<(Fixed const &src) const{

	return this->value < src.getRawBits();
}

bool Fixed::operator>(Fixed const &src) const{

	return this->value > src.getRawBits();
}

bool Fixed::operator>=(Fixed const &src) const{

	return this->value >= src.getRawBits();
}

bool Fixed::operator<=(Fixed const &src) const{

	return this->value <= src.getRawBits();
}

bool Fixed::operator==(Fixed const &src) const{

	return this->value == src.getRawBits();
}

bool Fixed::operator!=(Fixed const &src) const{

	return this->value != src.getRawBits();
}

Fixed &Fixed::max(Fixed & a, Fixed & b){

	return a.getRawBits() >= b.getRawBits() ? a : b;
}

Fixed const &Fixed::max(Fixed const & a, Fixed const & b){

	return a.getRawBits() >= b.getRawBits() ? a : b;
}

Fixed &Fixed::min(Fixed & a, Fixed & b){

	return a.getRawBits() <= b.getRawBits() ? a : b;
}

Fixed const &Fixed::min(Fixed const & a, Fixed const & b){

	return a.getRawBits() <= b.getRawBits() ? a : b;
}