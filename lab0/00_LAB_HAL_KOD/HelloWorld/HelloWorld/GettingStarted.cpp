#include <iostream>
#include <string>

#include "2_printing.h"

int main()
{
    int N;
    std::string S;

    // Bemenet beolvasása
    std::cout << "Adj meg egy egész számot: ";
    std::cin >> N;
    std::cout << "Adj meg egy legfeljebb 10 karakteres szöveget: ";
    std::cin >> S;

    // Függvényhívás
    printText(N, S);

    return 0;
}