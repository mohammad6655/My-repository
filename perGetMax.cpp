#include <iostream>

void readA2D(int a[][5], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter " << m << " number: ";
        for (int j = 0; j < m; j++)
        {
            std::cin >> a[i][j];
        }
    }
}
void printA2D(int a[][5], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            std::cout << a[i][j] << "\t";
        std::cout << '\n';
    }
}
int getMax(int a[][5], int n, int m)
{
    int max = a[0][0];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if ((i == 0 || i == n - 1 || j == 0 || j == m - 1) && max < a[i][j])
                max = a[i][j];
        }
    }
    return max;
}
int main()
{
    const int n = 5;
    const int m = 5;
    int a[n][m];
    readA2D(a, n, m);
    printA2D(a, n, m);
    std::cout << "Max is " << getMax(a, n, m);
    return 0;
}