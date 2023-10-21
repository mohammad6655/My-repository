#include <iostream>
#include <stdio.h>

int main()
{
    int a[100], i, j, l, n, num;
    std::cout << "Enter n: ";
    std::cin >> n;
    for (i = 0; i < n; i++)
    {
        std::cout << "Enter a[" << i + 1 << "]:";
        std::cin >> num;
        for (j = 0; j < i; j++)
        {
            if (a[j] > num)
                break;
            for (l = i; l > j; l--)
                a[l] = a[l - 1];
            a[j] = num;
        }
        std::cout << '\n'
                  << "Result is: ";
        for (i = 0; i < n; i++)
            std::cout << "    " << a[i];
        return 0;
    }
}