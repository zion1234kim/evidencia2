//Triangle.cpp
#include "Triangle.h" 

Triangle::Triangle() {
	v1 = point(0, 0);
	v2 = point(50, 30);
	v3 = point(25, 10);

}

Triangle::Triangle(point _v1, point _v2, point _v3) {
	v1 = _v1;
	v2 = _v2;
	v3 = _v3;
}

point Triangle::getVertice1() {
	return v1;
}

point Triangle::getVertice2() {
	return v2;
}

point Triangle::getVertice3() {
	return v3;
}

void Triangle::setVertice1(point _v1) {
	v1 = _v1;
	_v1; v2;
}

void Triangle::setVertice2(point _v2) {
	v2 = _v2;
}

void Triangle::setVertice3(point _v3) {
	v3 = _v3;
}

double Triangle::perimeter() {
	return v2.calculate_distance(v1) + v3.calculate_distance(v2) + v1.calculate_distance(v3);
}

double Triangle::area() {
	return 1.0 / 2 * abs(((v1.getX() * v2.getY()) + (v2.getX() * v3.getY()) + (v3.getX() * v1.getY())) - ((v1.getX() * v3.getY()) +(v3.getX() * v2.getY()) + (v2.getX() * v1.getY())));

}

std::string Triangle::str() {
	return v1.str() + ',' + v2.str() + ',' + v3.str();

}