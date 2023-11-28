//point.cpp
#include "point.h"

point::point() {
	x = 0;
	y = 0;

}

point::point(double _x, double _y) {
	x = _x;
	y = _y;

}

double point::getX() {
	return x;
}
double point::getY() {
	return y;
}

void point::setX(double _x) {
	x = _x;
}
void point::setY(double _y) {
	y = _y;
}

double point::calculate_distance(point p2) {
	return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y)*(p2.y - y));

}
std::string point::str() {
	return '(' + std::to_string(x) + ',' + std::to_string(y) + ')';
}