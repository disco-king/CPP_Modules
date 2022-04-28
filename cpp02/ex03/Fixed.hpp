#ifndef FIXED_H 
# define FIXED_H 

#include <iostream>
#include <cmath>

class Fixed
{

private:

	int value;
	static const int fractionalBits = 8;

public:

	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(Fixed const &);
	~Fixed();

	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed & min(Fixed & a, Fixed & b);
	static Fixed const & max(Fixed const & a, Fixed const & b);
	static Fixed const & min(Fixed const & a, Fixed const & b);

	Fixed operator+(Fixed const &) const;
	Fixed operator-(Fixed const &) const;
	Fixed operator*(Fixed const &) const;
	Fixed operator/(Fixed const &) const;
	Fixed & operator=(Fixed const &);

	Fixed & operator<<(Fixed const &);
	
	Fixed operator++(int);
	Fixed & operator++();
	Fixed operator--(int);
	Fixed & operator--();

	bool operator<(Fixed const &) const;
	bool operator>(Fixed const &) const;
	bool operator<=(Fixed const &) const;
	bool operator>=(Fixed const &) const;
	bool operator==(Fixed const &) const;
	bool operator!=(Fixed const &) const;

};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

bool bsp();

#endif