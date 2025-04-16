#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double x =0 ) {
	this->a = x;
	this->b = x;
}
//Rectangle::Rectangle(double x = 0): a(x), b(x) {}

Rectangle::Rectangle(double x, double y): a(x), b(y) {}

void Rectangle::seta(double x) {
	if (x > 0) this->a = x;

}

void Rectangle::setb(double x) {
	if (x > 0) this->b = x;

}

double Rectangle::getPerimeter() {
	return 2 * (a + b);
}

double Rectangle::getArea() {
	return a * b;
}

void Rectangle::print() {
	std::cout << "a:" << a << ", b:" << b << "endl";
}