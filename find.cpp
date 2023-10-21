#include <iostream>
#include <conio.h>

int find(int a[], int n, int key)
{
    for (int i = 0; i <= n - 1; i++)
        if (key == a[i])
            return i;
    return -1;
}
int main()
{
    int a[] = {17, 8, 13, 20, 6, 14};
    int n;
    n = sizeof(a) / sizeof(a[0]);

    int key = 3;
    int p;
    p = find(a, n, key);
    if (p == -1)
        std::cout << "not found";
    else
        std::cout << p;

    getch();
}