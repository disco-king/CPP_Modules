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

	Fixed & operator=(Fixed const &);
	Fixed & operator<<(Fixed const &);
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif