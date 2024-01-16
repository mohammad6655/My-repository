#include <iostream>

void readA2D(int a[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter " << m << " number for row[" << i << "]:";
        for (int j = 0; j < m; j++)
            std::cin >> a[i][j];
    }
}
void printA2D(int a[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            std::cout << a[i][j] << '\t';
        std::cout << '\n';
    }
}
int sum(int a[][4], int n, int m)
{
    int s = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
            if (i == j || i + j == m - 1)
                s += a[i][j];
    }
    return s;
}
int main()
{
    const int n = 4;
    const int m = 4;
    int a[n][m];
    readA2D(a, n, m);
    printA2D(a, n, m);
    std::cout << "Sum is " << sum(a, n, m);
    return 0;
}