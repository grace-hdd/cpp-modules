#include <iostream>
#include "Point.hpp"

int main(void) {
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point p1(1, 1);
    Point p2(10, 10);
    Point p3(0, 0);

    std::cout << "Point (1, 1) inside triangle? " 
              << (bsp(a, b, c, p1) ? "true" : "false") << std::endl;
    std::cout << "Point (10, 10) inside triangle? " 
              << (bsp(a, b, c, p2) ? "true" : "false") << std::endl;
    std::cout << "Point (0, 0) [Vertex] inside triangle? " 
              << (bsp(a, b, c, p3) ? "true" : "false") << std::endl;

    return 0;
}