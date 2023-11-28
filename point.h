//point.h
#pragma once
#ifndef point.h
#include <stdio.h>
#include <string>
#include <math.h>

class point
{
private:
	double x, y;
public:
	point();
	point(double _x, double _y);

	double getX();
	double getY();

	void setX(double _x);
	void setY(double _y);

	double calculate_distance(point p2);
	std::string str();
};

#endif