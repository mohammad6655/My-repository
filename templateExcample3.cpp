#include <iostream>
#include <conio.h>
#include <iomanip>

template <class T, class U>

U product(T x, U y)
{
    return x * y;
}
template <class T, class S, class U>
S product(T x, S y, U z)
{
    return x * y * z;
}
int main()
{
    int a(2);
    double B(1.5);

    std::cout << product(a, B) << '\n';
    std::cout << product('A', 2) << '\n';

    char Ch('D');
    std::cout << product(a, B, Ch) << '\n';

    getch();
}