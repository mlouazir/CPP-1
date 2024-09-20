#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"
class Point
{
private:
    Fixed const x;
    Fixed const y;
    Fixed notX;
    Fixed notY;
public:
    Point();
    Point( const float num1, const float num2 );
    Point( const Point& obj );
    Point& operator=( const Point& obj );
    float getXFloat() const;
    float getYFloat() const;
    Fixed getXFixed() const;
    Fixed getYFixed() const;
    ~Point() {};
};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif