#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    std::ostream& stream;
    int value;
    static const int frac = 8;
public:
    Fixed();
    Fixed( const int num );
    Fixed( const float num );
    Fixed( const Fixed &object );
    Fixed& operator=( const Fixed& other );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    std::ostream& operator<<( const Fixed& obj );// 3
    ~Fixed();
};

//std::ostream& operator<<( std::ostream& stream, const Fixed& obj ); // 2

#endif