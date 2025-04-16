#include "Malacpersely.h"

void Malacpersely::bedob(int penz)
{
	penztartalom += penz;
}

void Malacpersely::atont(Malacpersely &masik)
{
	penztartalom += masik.penztartalom;
	masik.penztartalom = 0;
}
// TODO
Malacpersely Malacpersely::operator+(int rhs)
{
	return Malacpersely(this->penztartalom + rhs);
}

Malacpersely &Malacpersely::operator+=(int rhs) // ha a belső tagot akarjuk megváltoztatni (this), akkor referencia kell
{
	this->penztartalom += rhs;
	return *this;
}

Malacpersely &Malacpersely::operator+=(Malacpersely &rhs)
{
	this->penztartalom += rhs.penztartalom;
	return *this;
}

Malacpersely operator+(const Malacpersely &rhs)
{
	return Malacpersely(this->penztartalom + rhs.penztartalom);
}
