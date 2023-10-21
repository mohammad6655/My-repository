#include <iostream>
#include <conio.h>

void hanoi(int n, int a, int b, int c)
{
    char *m = " ABC ";
    static int s_count = 1;

    if (n == 1)
    {
        std::cout << '\n'
                  << s_count++ << ":";
        std::cout << " Move Disk # " << n << " from " << m[a] << " To " << m[c] << '\n';
    }
    else
    {
        hanoi(n - 1, a, c, b);
        std::cout << '\n'
                  << s_count++ << ":";
        std::cout << " Move Disk # " << n << " from " << m[a] << " To " << m[c] << '\n';

        hanoi(n - 1, b, a, c);
    }
}
int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << '\n';
    hanoi(n, 1, 2, 3);

    getch();
}
