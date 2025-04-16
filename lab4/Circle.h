#pragma once
class Circle
{
private:
	double r;
public:

	Circle(double x = 0);

	double getr() {return r;}

	void setr(double x);

	double getArea();

	double getCircumference();

	void print();
};

