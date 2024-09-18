#include "Fixed.hpp"

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
    this->value = other.getRawBits();
    return *this;
}