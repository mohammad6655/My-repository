#include <iostream>
#include <cstring>
#include <conio.h>

class Sqr;

class Rect
{
    int x, y;

public:
    Rect(int a, int b) { x = a, y = b; }

    int area() { return x * y; }

    friend void Display(Rect R, Sqr S);
};

class Sqr
{
    int z;

public:
    Sqr(int C)
    {
        z = C;
    }
    int Area()
    {
        return z * z;
    }
    friend void Display(Rect R, Sqr S);
};
void Display(Rect R, Sqr S)
{
    std::cout << R.area() << '\n';
    std::cout << S.Area();
}

int main()
{
    Rect R1(3, 4);
    Sqr S1(2);

    Display(R1, S1);

    getch();
}