#include <iostream>
#include <conio.h>
#include <iomanip>

class T
{
private:
    int x, y;

public:
    T(int a, int b)
    {
        x = a;
        y = b;
    }
    T(){};

    friend int &operator*(const T &, const T &);
};

int &operator*(const T &S, const T &P)
{
    int k;
    k = S.x * P.x + S.y * P.y;
    return k;
}
int main()
{
    T a(1, 2);
    T b(4, 5);

    std::cout << a * b;

    getch();
}