#pragma once
class Rectangle
{
private:
	double a, b;
public:
	/*Rectangle();
	Rectangle(double x);*/
	Rectangle(double x = 0);
	Rectangle(double x, double y);

	//getter
	double geta(){
		return a;
	}

	double getb() {
		return b;
	}

	//setter

	void seta(double x);
	void setb(double b);

	//függvények

	double getPerimeter();
	double getArea();
	void print();

	//destruktor
};

