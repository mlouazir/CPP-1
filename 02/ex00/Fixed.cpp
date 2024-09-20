#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed &object )
{
    std::cout << "Copy constructor called\n";
    *this = object;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return this->value;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called\n";
    this->value = raw;
}

Fixed& Fixed::operator=( const Fixed& other )
{
    std::cout << "Copy assignement operator called\n";
    if (this == &other)
        return *this;    
    this->value = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called\n";
}