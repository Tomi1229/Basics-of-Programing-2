#include "complex.h"
#include <stdio.h>
#include <iostream>
using namespace std;

Complex operator+(const Complex &z1, const Complex &z2)
{
    Complex res(z1.getRe() + z2.getRe(), z1.getIm() + z2.getIm());
    return res;
}

ostream &operator<<(ostream &os, const Complex &z)
{
    os << z.getRe() << " + " << z.getIm();
    return os;
}

istream &operator>>(istream &is, Complex &z)
{
    double re, im;
    is >> re;
    char c = 0;
    is >> c;
    if (c != '+')
        is.clear(ios::failbit);
    if (c != 'i')
        is.clear(ios::failbit);
    if (c != '*')
        is.clear(ios::failbit);
    if ()
        return is;
}

int main(int argc, char **argv)
{
    Complex z1(1, 2);
    Complex z2(3, 4);
    Complex z3 = z1 + z2;

    Complex z4 = 9.0 + z2;

    z3.print();
    z4.print();

    z4++;
    ++z4;
    ++(++z4++)++;

    cout << z1 << endl;
    cout << "A kedvenc komplex számom: " << z1 << endl;
    cout << "És a tied" << endl;
    cin >> z2;
    cout << "A beolvasott szám: " << z2 << endl;

    getchar();
    return 0;
}