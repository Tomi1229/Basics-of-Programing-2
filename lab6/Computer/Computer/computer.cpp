#include "computer.h"
#include <iostream>

unsigned Computer::nextId = 0;

Computer::Computer() : id(nextId++), clockSpeed(1000) {}

Computer::Computer(const Computer &c) : id(nextId++), clockSpeed(c.clockSpeed) {}
/*
unsigned Computer::getClockSpeed() const
{
    return clockSpeed;
}
*/
void Computer::print() const
{
    std::cout << "ID: " << id << ", Clock speed: " << clockSpeed << std::endl;
}

void friendlyPrint(const Computer &c)
{
    std::cout << "ID: " << c.id << ", Clock speed: " << c.clockSpeed << std::endl;
}
