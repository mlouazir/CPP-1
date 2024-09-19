#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int frac = 8;
public:
    Fixed();
    Fixed( const int num );
    Fixed( const float num );
    Fixed( const Fixed &object );
    Fixed& operator=( const Fixed& other );
    bool operator>( const Fixed &obj ) const;
    bool operator<( const Fixed &obj ) const;
    bool operator<=( const Fixed &obj ) const;
    bool operator>=( const Fixed &obj ) const;
    bool operator==( const Fixed &obj ) const;
    bool operator!=( const Fixed &obj ) const;
    Fixed operator+( const Fixed &obj ) const;
    Fixed operator-( const Fixed &obj ) const;
    Fixed operator*( const Fixed &obj ) const;
    Fixed operator/( const Fixed &obj ) const;
    Fixed& operator++( void );
    Fixed& operator--( void );
    Fixed operator++( int ignored );
    Fixed operator--( int ignored );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed& min( Fixed& obj1, Fixed& obj2 );
    static const Fixed& min( const Fixed& obj1, const Fixed& obj2 );
    static Fixed& max( Fixed& obj1, Fixed& obj2 );
    static const Fixed& max( const Fixed& obj1, const Fixed& obj2 );
    ~Fixed();
};

std::ostream& operator<<( std::ostream& stream, const Fixed& obj);

#endif