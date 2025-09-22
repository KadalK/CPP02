#include "Fixed.hpp"

Fixed::Fixed() {
	this->_rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = obj._rawBits;
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

float	Fixed::toFloat() const{
	float tmp = (float)this->_rawBits / (1 << this->_bits);
	return(tmp);
}

int	Fixed::toInt() const{
	return (this->_rawBits >> this->_bits);
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = rhs._rawBits;
	return (*this);
}



//comp operator

bool	Fixed::operator>(const Fixed &rhs) const
{
	if (this->toFloat() > rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	if (this->toFloat() < rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	if (this->toFloat() >= rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	if (this->toFloat() <= rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	if (this->toFloat() == rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	if (this->toFloat() != rhs.toFloat())
		return (true);
	return (false);
}


//algo operator
Fixed	Fixed::operator+(const Fixed &rhs) const{

	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed &rhs) const{

	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed &rhs) const{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs) const{

	return (this->toFloat() / rhs.toFloat());
}


std::ostream & operator<<(std::ostream & o, Fixed const &value)
{
	o << value.toFloat();
	return (o);
}

Fixed	Fixed::min(const float num1, const float num2)
{
	if (num1 < num2)
		return(num1);
	return(num2);
}

Fixed	Fixed::max(Fixed& num1, Fixed& num2)
{
	if (num1 > num2)
		return(num1);
	return(num2);
}

const Fixed	Fixed::max(const Fixed& num1, const Fixed& num2)
{
	if (num1 > num2)
		return(num1);
	return(num2);
}

