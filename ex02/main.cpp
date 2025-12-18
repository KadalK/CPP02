#include "Fixed.hpp"

int main( void ) {
	Fixed a = 1;
	Fixed c = 2;
	if (a > c)
		std::cout << "la bita dudul" << std::endl;
	else
		std::cout << "la bita abdul" << std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0;
}