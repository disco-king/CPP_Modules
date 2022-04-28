#include "Point.hpp"

Point::Point() : x(0), y(0){

	// std::cout << "Default constructor called" << std::endl;
}

Point::~Point(){

	// std::cout << "Default destructor called" << std::endl;
}

Point::Point(float const in_x, float const in_y) : x(in_x), y(in_y){

	std::cout << "Float constructor called, x = " << in_x << ", y = " << in_y << std::endl;
}

Point::Point(Point const & src) : x(src.x), y(src.y){

	// std::cout << "Copy constructor called" << std::endl;
}

Point & Point::operator=(Point const &src){

	const_cast<Fixed &>(this->x) = src.getX();
	const_cast<Fixed &>(this->y) = src.getY();
	return *this;
}

Fixed Point::getX() const{

	Fixed ret = this->x;
	return ret;
}

Fixed Point::getY() const{

	Fixed ret = this->y;
	return ret;
}

Fixed check_side(Point const & l1, Point const & l2, Point const & p){

	Fixed m = (l1.getY() - l2.getY()) / (l1.getX() - l2.getX());
	return (p.getY() - l1.getY()) - m * (p.getX() - l1.getX());
}

bool diff_sides(Fixed f1, Fixed f2){

	if((f1 > 0 && f2 < 0) || (f1 < 0 && f2 > 0))
		return true;
	return false;
}

bool bsp(Point const a, Point const b, Point const c, Point const point){

	Fixed triangle_point;
	Fixed outer_point;

	triangle_point = check_side(a, b, c);
	outer_point = check_side(a, b, point);
	if (diff_sides(triangle_point, outer_point))
		return false;
	triangle_point = check_side(b, c, a);
	outer_point = check_side(b, c, point);
	if (diff_sides(triangle_point, outer_point))
		return false;
	triangle_point = check_side(c, a, b);
	outer_point = check_side(c, a, point);
	if (diff_sides(triangle_point, outer_point))
		return false;
	return true;
}