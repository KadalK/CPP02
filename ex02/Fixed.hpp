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
//Les 6 opérateur de comparaison : >, <, >=, <=, == et !=
	bool	operator>(const Fixed &rhs) const ;
	bool	operator<(const Fixed &rhs) const ;
	bool	operator>=(const Fixed &rhs) const ;
	bool	operator<=(const Fixed &rhs) const ;
	bool	operator==(const Fixed &rhs) const ;
	bool	operator!=(const Fixed &rhs) const ;
//Les 4 opérateurs de arithmétiques : +, -, *, et /
	Fixed	operator+(const Fixed &rhs) const;
	Fixed	operator-(const Fixed &) const;
	Fixed	operator*(const Fixed &) const;
	Fixed	operator/(const Fixed &) const;
//

	Fixed&	operator=(const Fixed &rhs);

	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed	min(const float, const float);
	static Fixed	max(Fixed&,Fixed&);
	static const Fixed	max(const Fixed&,const Fixed&);
};

std::ostream & operator<<(std::ostream & o, Fixed const&);

#endif