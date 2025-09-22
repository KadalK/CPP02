#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {
private:
	const Fixed _x;
	const Fixed	_y;
public:
	Point(void);
	Point(const float x, const float y);
	Point(const Point&);
	Point&	operator=(const Point &rhs);
	~Point(void);

};


#endif
