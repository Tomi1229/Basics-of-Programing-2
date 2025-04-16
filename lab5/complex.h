#include <iostream>
#pragma once
using namespace std;

class Complex
{
    double real;
    double imag;

public:
    Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}
    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    getRe() { return real; }

    getIm()
    {
        return imag;
    }

    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator-() const
    {
        return Complex(-real, -imag);
    }

    Complex &operator++()
    {
        real++;
        return *this;
    }

    Complex &operator++(int)
    {
        imag++;
        return *this;
    }
};