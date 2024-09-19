#include <iostream>
#include <cstdio>
#include "Point.hpp"

int main( void ) {
    Point a(0, 0);
    Point b(20, 0);
    Point c(30, 30);
    Point p(10, 15);
    std::cout << bsp(a, b, c, p) << std::endl;
return 0;
}