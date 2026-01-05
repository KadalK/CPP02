#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
private:
	int					_rawBits;
	static const int	_bits = 8;
public:
	Fixed(void);
	Fixed(const int);
	Fixed(const Fixed&);
	~Fixed(void);

	Fixed	operator+(const Fixed &rhs) const;
	Fixed&	operator=(const Fixed &rhs);
	int		getRawBits(void) const;
	void	setRawBits(int);
};

#endif