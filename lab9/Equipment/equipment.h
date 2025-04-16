#pragma once

class Equipment
{
private:
    unsigned serialNumber;
    unsigned price;

public:
    Equipment(unsigned serialNumber, unsigned price) : serialNumber(serialNumber), price(price) {}

    void print() const {}
};