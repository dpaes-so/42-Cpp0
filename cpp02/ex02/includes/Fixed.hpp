#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _bits;
    public:
        Fixed();
        Fixed(const Fixed &src);
        Fixed(const int n_value);
        Fixed(const float n_value);
        float toFloat( void ) const;
        int toInt(void) const;
        Fixed &operator=(Fixed const &source);
        bool operator<(Fixed const &number) const;
        bool operator>(Fixed const &number) const;
        bool operator<=(Fixed const &number) const;
        bool operator>=(Fixed const &number) const;
        bool operator==(Fixed const &number) const;
        bool operator!=(Fixed const &number) const;
        Fixed operator+(Fixed const &number) const;
        Fixed operator-(Fixed const &number) const;
        Fixed operator*(Fixed const &number) const;
        Fixed operator/(Fixed const &number) const;
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static  Fixed &min(Fixed &a,Fixed &b);
        static  Fixed &max(Fixed &a,Fixed &b);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

std::ostream &operator<<(std::ostream &stream, Fixed const &src);
#endif