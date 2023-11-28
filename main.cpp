//main.cpp
#include <iostream>
#include "Triangle.h"
#include "point.h"
using namespace std;


int main() {

    point p1(0, 0);
    point p2(50, 30);
    point p3(25, 10);

    Triangle myTriangle(p1, p2, p3);

    std::cout << "Vertices of the triangle: " << myTriangle.str() << std::endl;
    std::cout << "Area of the triangle: " << myTriangle.area() << std::endl;
    std::cout << "Perimeter of the triangle: " << myTriangle.perimeter() << std::endl;


	return 0;
}


