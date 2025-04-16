#include "equipment.h"

#include <iostream>
#include <string>

Equipment::Equipment(unsigned serialNumber, unsigned price) : serialNumber(serialNumber), price(price) {}

void Equipment::print() const
{
    std::cout << "Serial Number: " << serialNumber << ", Price: " << price << std::endl;
}