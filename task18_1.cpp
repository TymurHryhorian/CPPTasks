#include "task17_1.cpp";
#include <iostream>
using namespace std;

template <class T>
T Large(T n1, T n2)
{
    return (n1 > n2) ? n1 : n2;
}

int main()
{
    RationalNum a = 1, b = 2;
    cout << Large(a, b);

    // needed to redifine the ">" method
}