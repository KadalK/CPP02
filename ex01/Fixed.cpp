#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(int const value) {
	this->_rawBits = value << this->_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) {
	this->_rawBits = roundf(value * (1 << this->_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat() const
{
	float tmp = (float)this->_rawBits / (1 << this->_bits);
	return(tmp);
}

int	Fixed::toInt() const
{
	return (this->_rawBits >> this->_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const &value)
{
	o << value.toFloat();
	return (o);
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = rhs._rawBits;
	return (*this);
}

