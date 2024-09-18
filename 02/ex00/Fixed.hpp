#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int value;
    static const int frac = 8;
public:
    Fixed() : value(0) {std::cout << "Default constructor called\n";};
    Fixed( Fixed &object ) {std::cout << "Copy constructor called\n";*this = object;};
    Fixed& operator=(const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed() {std::cout << "Destructor Called\n";};
};

#endif