#include "complex.h"
#include <stdio.h>
#include <iostream>
using namespace std;

class Complex
{
    double re;
    double im;

public:
    Complex(double pre = 0.0, double pim = 0.0) : re(pre), im(pim) {}

    double getRe() const
    {
        return re;
    }

    double getIm() const
    {
        return im;
    }
};
