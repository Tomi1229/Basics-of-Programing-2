#include <iostream>
#include <string>

void printText(int N, const std::string &S)
{
    for (int i = 0; i < N; ++i)
    {
        std::cout << S << std::endl;
    }
}