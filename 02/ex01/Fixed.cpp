#include "Fixed.hpp"

Fixed::Fixed( const int num)
{
    std::cout << "Int constructor called\n";
    this->value = roundf(num * (1 << this->frac));
}

Fixed::Fixed( const float num)
{
    std::cout << "Float constructor called\n";
    this->value = roundf(num * (1 << this->frac));
}

float Fixed::toFloat( void ) const
{
    return (float)this->value / (float)(1 << this->frac);
}

int Fixed::toInt( void ) const
{
    return this->value >> this->frac;
}

int Fixed::getRawBits( void ) const
{
    return this->value;
}

void Fixed::setRawBits( int const raw ) 
{
    this->value = raw;
}

Fixed& Fixed::operator=( const Fixed& other )
{
    std::cout << "Copy assignement operator called\n";
    this->value = other.getRawBits();
    return *this;
}

std::ostream& operator<<( std::ostream& stream, const Fixed& obj )
{
    stream << obj.toFloat();
    return stream;
}