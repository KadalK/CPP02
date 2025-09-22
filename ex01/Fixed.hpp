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

	Fixed&	operator=(const Fixed &rhs);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const&);

#endif