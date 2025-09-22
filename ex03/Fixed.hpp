#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int					_rawBits;
	static const int	_bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed&);
	Fixed(int const);
	Fixed(float const);
	~Fixed(void);
//comp ope
	bool	operator>(const Fixed &rhs) const;
	bool	operator<(const Fixed &rhs) const;
	bool	operator>=(const Fixed &rhs) const;
	bool	operator<=(const Fixed &rhs) const;
	bool	operator==(const Fixed &rhs) const;
	bool	operator!=(const Fixed &rhs) const;
//algo ope
	Fixed	operator+(const Fixed &rhs) const;
	Fixed	operator-(const Fixed &) const;
	Fixed	operator*(const Fixed &) const;
	Fixed	operator/(const Fixed &) const;
//post/pre incr/decr ope
	int operator++();
	Fixed operator++(const int);
	int operator--();
	Fixed operator--(const int);

	Fixed&	operator=(const Fixed &rhs);
	float	toFloat(void) const;
	int		toInt(void) const;
	static Fixed	max(const Fixed&, const Fixed&);
	static Fixed	min(const Fixed&, const Fixed&);
};

std::ostream & operator<<(std::ostream & o, Fixed const&);

#endif