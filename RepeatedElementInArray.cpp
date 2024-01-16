#include <iostream>

void readA2D(int a[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter " << m << " numbers: ";
        for (int j = 0; j < m; j++)
            std::cin >> a[i][j];
    }
}
void printA2D(int a[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            std::cout << a[i][j] << "\t";
        std::cout << '\n';
    }
}
int count(int a[][4], int n, int m, int x)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (a[i][j] == x)
                c++;
    }
    return c;
}
bool duplicate(int a[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (count(a, n, m, a[i][j]) > 1)
                return true;
    }
    return false;
}
int main()
{
    const int n = 4;
    const int m = 4;
    int x[n][m];
    readA2D(x, n, m);
    printA2D(x, n, m);
    if (duplicate(x, n, m) == true)
        std::cout << "Yes";
    else
        std::cout << "No";
    return 0;
}