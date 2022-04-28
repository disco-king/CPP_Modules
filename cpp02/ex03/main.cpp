#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void ) {

	Point a(-2, -7);
	Point b(-2, -3);
	Point c(-9, -3);

	std::cout << std::endl;

	Point p1(-7, -7); //out
	Point p2(-3, -5); //in
	Point p3(-3, -2); //out
	Point p4(-7, -4.5); //in?

	std::cout << std::endl;

	// Point a(2, 7);
	// Point b(2, 3);
	// Point c(9, 3);

	// std::cout << std::endl;

	// Point p1(7, 7); //out
	// Point p2(3, 5); //in
	// Point p3(3, 2); //out
	// Point p4(7, 4); //in?

	// std::cout << std::endl;

	std::cout << "p1 is " << bsp(a, b, c, p1) << std::endl;
	std::cout << "p2 is " << bsp(a, b, c, p2) << std::endl;
	std::cout << "p3 is " << bsp(a, b, c, p3) << std::endl;
	std::cout << "p4 is " << bsp(a, b, c, p4) << std::endl;
	return 0;
}