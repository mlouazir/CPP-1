#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{

}

Fixed::Fixed( const Fixed &object )
{
    *this = object;
}

Fixed::Fixed( const int num)
{
    this->value = num * (1 << this->frac);
}

Fixed::Fixed( const float num)
{
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
    if (this == &other)
        return *this;
    this->value = other.getRawBits();
    return *this;
}

std::ostream& operator<<( std::ostream& stream, const Fixed& obj )
{
    stream << obj.toFloat();
    return stream;
}

bool Fixed::operator>( const Fixed& obj ) const
{
    return this->value > obj.getRawBits();
}

bool Fixed::operator<( const Fixed& obj ) const
{
    return this->value < obj.getRawBits();
}

bool Fixed::operator>=( const Fixed& obj ) const
{
    return this->value >= obj.getRawBits();
}

bool Fixed::operator<=( const Fixed& obj ) const
{
    return this->value <= obj.getRawBits();
}

bool Fixed::operator==( const Fixed& obj ) const
{
    return this->value == obj.getRawBits();
}

bool Fixed::operator!=( const Fixed& obj ) const
{
    return this->value != obj.getRawBits();
}

Fixed Fixed::operator+( const Fixed& obj ) const
{
    return Fixed(this->value + obj.getRawBits());
}

Fixed Fixed::operator-( const Fixed& obj ) const
{
    return Fixed(this->value - obj.getRawBits());
}

Fixed Fixed::operator*( const Fixed& obj ) const
{
    return Fixed(((float)(this->value * obj.getRawBits())) / ((float)((1 << this->frac) * (1 << this->frac))));
}

Fixed Fixed::operator/( const Fixed& obj ) const
{
    return Fixed(((float)(this->value) / (float)(obj.getRawBits())) / ((float)((1 << this->frac) / (float)(1 << this->frac))));
}

Fixed& Fixed::operator++( void )
{
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}

Fixed& Fixed::operator--( void )
{
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator++( int ignored )
{
    (void)ignored;
    Fixed oldState = *this;
    this->operator++();
    return oldState;
}

Fixed Fixed::operator--( int ignored )
{
    (void)ignored;
    Fixed oldState = *this;
    this->operator--();
    return oldState;
}

Fixed& Fixed::min( Fixed& obj1, Fixed& obj2 )
{
    if (obj1.getRawBits() <= obj2.getRawBits())
        return obj1;
    return obj2;
}

const Fixed& Fixed::min( const Fixed& obj1, const Fixed& obj2 )
{
    if (obj1.getRawBits() <= obj2.getRawBits())
        return obj1;
    return obj2;
}

Fixed& Fixed::max( Fixed& obj1, Fixed& obj2 )
{
    if (obj1.getRawBits() <= obj2.getRawBits())
        return obj2;
    return obj1;
}

const Fixed& Fixed::max( const Fixed& obj1, const Fixed& obj2 )
{
    if (obj1.getRawBits() <= obj2.getRawBits())
        return obj2;
    return obj1;
}

Fixed::~Fixed()
{

}