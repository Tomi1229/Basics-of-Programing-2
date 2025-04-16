#include <iostream>
#include "display.h"
#include "equipment.h"

using namespace std;

// A serialNo �s a price param�tereket is el kell t�rolnunk valahol
Display::Display(unsigned serialNumber, unsigned price, unsigned age) : Equipment(serialNumber, price), age(age) {}

void Display::setAge(unsigned age)
{
	this->age = age;
}

unsigned Display::getAge() const
{
	return age;
}

void Display::print() const
{
	Equipment::print();

	cout << " Age (Display): " << age;
}
