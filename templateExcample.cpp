#include <iostream>
#include <conio.h>
#include <iomanip>


// using std::fixed;
// using std::setprecision;
template <class T, class E>
E min(T x, E y)
{
    return (x > y ? x : y);
}

int main()
{
    int n = 2;
    double m = 2.5;
    std::cout << min(n, m) << '\n';

    int ch1 = 67;
    char ch2 = 'A';
    std::cout << min(ch1, ch2) << '\n';

    double D1 = 3.5;
    double D2 = 4.5;
    std::cout << min(D1, D2) << '\n';

    getch();
}