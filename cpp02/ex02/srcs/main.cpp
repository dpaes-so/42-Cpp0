#include "../includes/Fixed.hpp"
int main( void )
{
	Fixed a(3);
    Fixed b(12);
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a:	" << a << std::endl;

	std::cout << "++a:	" << ++a << std::endl;
	std::cout << "a:	" << a << std::endl;

	std::cout << "a++:	" << a++ << std::endl;
	std::cout << "a:	" << a << std::endl;

	std::cout << "--a:	" << --a << std::endl;
	std::cout << "a:	" << a << std::endl;

	std::cout << "a--:	" << a-- << std::endl;
	std::cout << "a:	" << a << std::endl;

	std::cout << "b:	" << b << std::endl;

	std::cout << "b / a:	" << b / a << std::endl;
	std::cout << "a * b:	" << a * b << std::endl;

	std::cout << "a:	" << a << std::endl;
	std::cout << "b:	" << b << std::endl;
	std::cout << "a + b:	" << a + b << std::endl;
	std::cout << "b - a:	" << b - a << std::endl;

	std::cout << "max:	" << Fixed::max( a, b ) << std::endl;
	std::cout << "min:	" << Fixed::min( a, b ) << std::endl;

	std::cout << "a < b:	" << (a < b) << std::endl;
	std::cout << "b < a:	" << (b < a) << std::endl;

	std::cout << "a > b:	" << (a > b) << std::endl;
	std::cout << "b > a:	" << (b > a) << std::endl;

	std::cout << "a <= b:	" << (a <= b) << std::endl;
	std::cout << "b <= a:	" << (b <= a) << std::endl;
	
	std::cout << "a >= b:	" << (a >= b) << std::endl;
	std::cout << "b >= a:	" << (b >= a) << std::endl;
	
	std::cout << "a:	" << a << std::endl;
	std::cout << "b:	" << b << std::endl;

	std::cout << "a <= b:	" << (a <= b) << std::endl;
	std::cout << "b <= a:	" << (b <= a) << std::endl;
	
	std::cout << "a >= b:	" << (a >= b) << std::endl;
	std::cout << "b >= a:	" << (b >= a) << std::endl;

	std::cout << "a == b:	" << (a == b) << std::endl;
	std::cout << "a != b:	" << (a != b) << std::endl;

	a = b;
	std::cout << "a = b" << std::endl;
	std::cout << "a is now equal b" << std::endl;
	std::cout << "a:	" << a << std::endl;
	std::cout << "b:	" << b << std::endl;

	std::cout << "a <= b:	" << (a <= b) << std::endl;
	std::cout << "b <= a:	" << (b <= a) << std::endl;
	
	std::cout << "a >= b:	" << (a >= b) << std::endl;
	std::cout << "b >= a:	" << (b >= a) << std::endl;

	std::cout << "a == b:	" << (a == b) << std::endl;
	std::cout << "a != b:	" << (a != b) << std::endl;

	return 0;
}