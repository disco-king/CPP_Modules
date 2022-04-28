#ifndef FIXED_H 
# define FIXED_H 

#include <iostream>

class Fixed
{

private:

	int value;
	static const int fractionalBits = 8;

public:

	Fixed();
	Fixed(Fixed const &src);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed & operator=(Fixed const &);

};

#endif