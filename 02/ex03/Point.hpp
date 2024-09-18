#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"
class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point() : x(Fixed(0)), y(Fixed(0)) {};
    Point( const float num1, const float num2 ) : x(Fixed(num1)), y(Fixed(num2)) {};
    // Point( Point& obj ) {*this = obj;};
    // Fixed& operator=( const Point& obj ) {
    //     if (this != &obj) {
    //         this->x = obj.getX();
    //     }
    // };
    float getXFloat();
    float getYFloat();
    ~Point() {};
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif