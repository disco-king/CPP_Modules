#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{

private:

	Fixed const x;
	Fixed const y;

public:
	Point();
	Point(float const x, float const y);
	Point(Point const & src);
	~Point();

	Fixed getX() const;
	Fixed getY() const;

	Point & operator=(Point const &);

};

bool bsp(Point const a, Point const b, Point const c, Point const point);
Fixed check_side(Point const & l1, Point const & l2, Point const & p);


#endif