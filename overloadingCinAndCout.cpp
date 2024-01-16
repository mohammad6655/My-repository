#include <iostream>
#include <conio.h>

class C
{
private:
    int x;
    int y;

    friend std::istream &operator>>(std::istream &, C &);
    friend std::ostream &operator<<(std::ostream &, C &);
};

std::istream &operator>>(std::istream &t, C &n)
{
    t >> n.x;
    t >> n.y;

    return t;
}

std::ostream &operator<<(std::ostream &k, C &L)
{
    k << L.x;
    k << L.y;
    return (k);
}

int main()
{
    C ob;

    std::cin >> ob;

    std::cout << "\n----------------\n";

    std::cout << ob;

    getch();
}