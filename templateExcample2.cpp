#include <iostream>
#include <conio.h>
#include <iomanip>

template <class T>

T Product(T x, T y)
{
    return x * y;
}
template <class T>
T Product(T x, T y, T z)
{
    return x * y * z;
}

int main()
{
    int a(2), b(3), c(4);
    std::cout << Product(a, b, c) << '\n';
    std::cout << Product(a, b) << '\n';

    double A(2.0), B(5.5), C(1.5);
    std::cout << Product(A, B) << '\n';
}