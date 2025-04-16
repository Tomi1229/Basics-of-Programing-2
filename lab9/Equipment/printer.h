#pragma once
#include "equipment.h"

// Displayeket �s Printereket k�z�s t�mbben szeretn�nk valahogy t�rolni
class Printer : public Equipment
{
	unsigned serialNumber;
	unsigned price;
	unsigned cartridgePrice;

public:
	Printer(unsigned serialNumber = 0, unsigned price = 0, unsigned cartridgePrice = 0);

	void setCartridgePrice(unsigned cartridgePrice);
	unsigned getCartridgePrice() const;

	void print() const;
};
