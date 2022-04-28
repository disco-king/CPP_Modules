#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "------------------------" \
	<< std::endl << std::endl;

	// Fixed c(15);
	// Fixed d(5);
	Fixed c(15.0f);
	Fixed d(5.0f);

	std::cout << "gt " << (c > d) << std::endl;
	std::cout << "lt " << (c < d) << std::endl;
	std::cout << "get " << (c >= c) << std::endl;
	std::cout << "let " << (c <= d) << std::endl;
	std::cout << "et " << (c == d) << std::endl;
	std::cout << "net " << (c != d) << std::endl;
	std::cout << "div " << (c / d) << std::endl;
	std::cout << "mul " << (c * d) << std::endl;
	std::cout << "add " << (c + d) << std::endl;
	std::cout << "sub " << (c - d) << std::endl;
	std::cout << "max " << Fixed::max(c, d) << std::endl;
	std::cout << "min " << Fixed::min(c, d) << std::endl;
	std::cout << std::endl;
	std::cout << "val " << c << std::endl;
	std::cout << "ass " << (c = d) << std::endl;
	std::cout << "val " << c << std::endl;
	
	return 0;
}