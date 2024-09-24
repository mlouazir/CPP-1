#include "Fixed.hpp"

Fixed::Fixed() : stream(std::cout), value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed &object ) :stream(std::cout) 
{
    std::cout << "Copy constructor called\n";
    *this = object;
}

Fixed::Fixed( const int num ) : stream(std::cout)
{
    std::cout << "Int constructor called\n";
    this->value = num * (1 << this->frac);
}

Fixed::Fixed( const float num ) : stream(std::cout)
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
    return this->value / (1 << this->frac);
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
    if (this == &other)
        return *this;    
    this->value = other.getRawBits();
    return *this;
}

std::ostream& operator<<( const Fixed& obj )
{
    stream << obj.toFloat();
    return stream;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called\n";
}