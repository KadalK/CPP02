#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0), _y(0) {
}
Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point &obj) : _x(obj._x), _y(obj._y) {

}

Point& Point::operator=(const Point &rhs)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	this->_x = rhs._x;
	this->_y = rhs._y;
	return (*this);
}

Point::~Point() {}
