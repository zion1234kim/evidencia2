//Triangle.h
#pragma once
#ifndef Triangle.h
#include <stdio.h>
#include "point.h"

class Triangle
{
private:
	point v1, v2, v3;
public:
	Triangle();
	Triangle(point _v1, point _v2, point _v3);

	point getVertice1();
	point getVertice2();
	point getVertice3();
	void setVertice1(point _v1);
	void setVertice2(point _v2);
	void setVertice3(point _v3);

	double perimeter();
	double area();
	std::string str();

};

#endif


