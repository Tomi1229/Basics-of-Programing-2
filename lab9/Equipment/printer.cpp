#include <iostream>
#include "printer.h"
#include "equipment.h"

using namespace std;

// A serialNo �s a price param�tereket is el kell t�rolnunk valahol
Printer::Printer(unsigned serialNo, unsigned price, unsigned cartridgePrice) : Equipment(serialNo, price), cartridgePrice(cartridgePrice) {}

void Printer::setCartridgePrice(unsigned cartridgePrice)
{
	this->cartridgePrice = cartridgePrice;
}

unsigned Printer::getCartridgePrice() const
{
	return cartridgePrice;
}

void Printer::print() const
{
	Equipment::print();
	cout << " Cartridge Price (Printer):" << cartridgePrice;
}
