#include <iostream>
#include <cstdio>
#include "Point.hpp"

int main( void ) {
    Point a(0, 0);
    Point b(20, 0);
    Point c(10, 30);
    Point p(20, 0);
    std::cout << bsp(a, b, c, p) << std::endl;
return 0;
}