#include "Fraction.h"

// Konstruktor

// Fraction::Fraction(int whole, int num, int denom) : wholePart(whole), numerator(num), denominator(denom) {}

Fraction::Fraction(int whole, int num, int denom)
{
    if (denom == 0)
    {
        throw FractionException("Denominator cannot be zero!");
    }
    wholePart = whole;
    numerator = num;
    denominator = denom;
}

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

Fraction Fraction::operator+(const Fraction &other) const
{
    int newWholePart = wholePart + other.wholePart;
    int newNumerator = numerator * other.denominator + other.numerator * denominator;
    int newDenominator = denominator * other.denominator;

    // Egyszerusites
    if (newNumerator >= newDenominator)
    {
        newWholePart += newNumerator / newDenominator;
        newNumerator = newNumerator % newDenominator;
    }

    return Fraction(newWholePart, newNumerator, newDenominator);
}

// Konverzios konstruktor

Fraction::Fraction(double d)
{
    wholePart = static_cast<int>(d);
    d -= wholePart;
    numerator = 0;
    denominator = 1;
    while (d - static_cast<int>(d) > EPSILON)
    {
        d *= 10;
        denominator = 10 * denominator + static_cast<int>(d);
        d -= numerator;
        denominator *= 10;
    }
}
