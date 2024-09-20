#include "Point.hpp"

float aera( Point const p1, Point const p2, Point const p3)
{
    float a = (p1.getXFloat() * (p2.getYFloat() - p3.getYFloat()) + p2.getXFloat() *(p3.getYFloat() - p1.getYFloat()) + p3.getXFloat() * (p1.getYFloat() - p2.getYFloat()))/2.0;
    if (a < 0)
        return -a;
    return a;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float totalArea = aera( a, b, c );

    float fractionOne = aera(a, point, c);
    float fractionTwo = aera(b, point, c);
    float fractionThree = aera(a, point, b);

    if (!fractionOne || !fractionTwo || !fractionThree)
        return false;
    return totalArea == fractionOne + fractionTwo + fractionThree;
}