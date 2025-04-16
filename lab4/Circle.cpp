#include "Circle.h"
#include "iostream"
Circle::Circle(double x) {
	this->r = x;
}

Circle::Circle(double x) : r(x) {}

void Circle::setr(double x) {
	if (x > 0) this->r  = x;

}

double Circle::getArea(){
	return r * r * 3.14;
}

double Circle::getCircumference() {
	return 2 * r * 3.14;
}

void Circle::print() {
	std::cout << "r:" << r << "endl";
}