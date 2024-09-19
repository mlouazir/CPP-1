#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
    notX = x;
    notY = y;
}

Point::Point( const float num1, const float num2 ) : x(Fixed(num1)), y(Fixed(num2))
{
    notX = x;
    notY = y;
}

Point::Point( const Point& obj )
{
    *this = obj;
}

Point& Point::operator=( const Point &obj )
{
    if (this == &obj)
        return *this;
    this->notX.setRawBits(obj.getXFixed().getRawBits());
    this->notY.setRawBits(obj.getYFixed().getRawBits());
    return *this;
}

float Point::getXFloat() const
{
    return this->notX.toFloat();
}

float Point::getYFloat() const
{
    return this->notY.toFloat();
}

Fixed Point::getXFixed() const
{
    return this->notX;
}

Fixed Point::getYFixed() const
{
    return this->notY;
}