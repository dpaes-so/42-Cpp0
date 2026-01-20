#include "../includes/Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed(void )
{
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
		this->setRawBits(source.getRawBits());
	return *this;
}

Fixed::Fixed(const int n_value)
{
    std::cout << "integer constructor called" << std::endl;
    setRawBits(n_value << _bits);
}

Fixed::Fixed(const float n_value)
{
    std::cout << "float constructor called" << std::endl;
	setRawBits(roundf(n_value * float(1 << _bits)));//n_value * 256
}

float Fixed::toFloat(void) const
{
    return (_value / float(1 << _bits));
}

int Fixed::toInt(void) const
{
	return (getRawBits() >> _bits);
}

std::ostream &operator<<(std::ostream &stream, Fixed const &src)//return stream for chained stuff
{
	stream << src.toFloat();
	return (stream);
}

Fixed::Fixed(const Fixed &src )
{
    std::cout << "Copy constructor called" << std::endl;
    // this->_value = src._value;
    *this = src;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return(this->_value);
}

void Fixed::setRawBits( int const raw )
{
    // std::cout << "getRawBits member function called" << std::endl;
    this->_value = raw;
}

