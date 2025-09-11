#include "Fixed.hpp"


Fixed::Fixed() {
	this->_rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int raw) : _rawBits(raw) {
	std::cout << "Copy assignment operator called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(int n)
{
	this->_rawBits = n;
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	std::cout << "Copy assignment operator called" << std::endl;

	return Fixed(this->_rawBits + rhs.getRawBits());
}

Fixed&	Fixed::operator=(const Fixed &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();

	return (*this);
}

//std::ostream & operator<<(std::ostream & o, Fixed& rhs)
//{
//	o << rhs.getRawBits();
//	return o;
//}