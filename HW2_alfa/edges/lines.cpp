#include "lines.h"
#include <iostream>
#include <iomanip>

Line::Line(const std::string &id, Node *from, Node *to, LineType type,
           double length, std::complex<double> impedance, double capacity)
    : id(id), from(from), to(to), type(type), length(length),
      impedance(impedance), capacity(capacity) {}

std::string Line::getId() const
{
    return id;
}

Node *Line::getFrom() const
{
    return from;
}

Node *Line::getTo() const
{
    return to;
}

LineType Line::getType() const
{
    return type;
}

double Line::getLength() const
{
    return length;
}

std::complex<double> Line::getImpedance() const
{
    return impedance;
}

double Line::getCapacity() const
{
    return capacity;
}

void Line::displayInfo() const
{
    std::cout << "Line ID: " << id << "\n";
    std::cout << "  Type: " << (type == LineType::AC ? "AC" : "DC") << "\n";
    std::cout << "  From Node: " << from->getId() << "\n";
    std::cout << "  To Node: " << to->getId() << "\n";
    std::cout << "  Length: " << length << " km\n";
    std::cout << "  Impedance: " << impedance.real() << " + j" << impedance.imag() << " Ohm\n";
    std::cout << "  Capacity: " << capacity << " MVA\n";
}