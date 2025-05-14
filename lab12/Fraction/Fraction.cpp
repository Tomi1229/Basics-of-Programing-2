#include "Fraction.h"

// Konstruktor

Fraction::Fraction(int whole, int num, int denom) : wholePart(whole), numerator(num), denominator(denom) {}

// Konverzios operatorok: double es string

Fraction::operator double() const
{
    return wholePart + ((double)numerator / denominator);
}

Fraction::operator std::string() const
{
    return std::to_string(wholePart) + " " + std::to_string(numerator) + "/" + std::to_string(denominator);
}

// Operator+ fuggveny

// Konverzios konstruktor
