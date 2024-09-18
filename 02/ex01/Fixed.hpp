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
    Fixed() : value(0) {std::cout << "Default constructor called\n";};
    Fixed( const int num );
    Fixed( const float num );
    Fixed( const Fixed &object )  {std::cout << "Copy constructor called\n";*this = object;};
    Fixed& operator=( const Fixed& other );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed() {std::cout << "Destructor Called\n";};
};

std::ostream& operator<<( std::ostream& stream, const Fixed& obj);

#endif