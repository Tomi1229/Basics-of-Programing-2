#pragma once
#include <iostream>

class Malacpersely
{
	int penztartalom;

public:
	Malacpersely(int penz = 0) : penztartalom(penz) {}
	void bedob(int penz);
	void atont(Malacpersely &masik);
	int ertek() const { return penztartalom; }

	// operatorok:

	Malacpersely operator+(int rhs);				   // csak fejléc
	Malacpersely &operator+=(int rhs);				   // csak fejléc
	Malacpersely &operator+=(const Malacpersely &rhs); // csak fejléc
	Malacpersely operator+(const Malacpersely &rhs);   // csak fejléc
};