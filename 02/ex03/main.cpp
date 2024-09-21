#include <iostream>
#include <cstdio>
#include "Point.hpp"

int main( void ) {
    Point a(6.74789, -5.19804);
    Point b(6.46995, -4.91099);
    Point c(6.33629, -5.36815);
    Point p(6.50792, -5.14792);
    Fixed x;
    std::string value = "Wili"
    x.thistest();
    if ( bsp(a, b, c, p) == 0)
        std::cout << "Outside" << std::endl;
    else 
        std::cout << "Inside" << std::endl;
return 0;
}