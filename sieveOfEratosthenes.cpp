#include <iostream>

int main()
{
    int i, a[1001] = {0};
    for (i = 0; i <= 999; i++)
        a[i] = 1;
    for (i = 2; i <= 40; i++)
        for (int j = 2; j <= (1000 / i); j++)
            a[(i * j)] = 0;
    for (i = 1; i <= 1000; i++)
        if (a[i])
            std::cout << "\t" << i;
    return 0;
}