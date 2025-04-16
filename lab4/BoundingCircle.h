#pragma once
#include "Rectangle.h"
#include "Circle.h"
#include <cmath>
class BoundingCircle
{
private:
	Rectangle innerSquare;
	Circle outerCircle;

public:

	BoundingCircle() : innerSquare ( 1, 1), outerCircle(sqrt(2)/2) {}

	BoundingCircle(double side) : innerSquare (side, side), outerCircle(side * (sqrt(2))/2) {}

	double getArea();

	Rectangle getInnerSquare();

	Circle getOuterCircle();

	double getPerimeter();

	void print();
};

