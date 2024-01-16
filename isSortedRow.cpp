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
bool isSortedRows(int a[][4], int n, int m)
{
    for (int i = 0; i <= n - 1; i++)
        for (int j = 0; j <= m - 2; j++)
            if (a[i][j] > a[i][j + 1])
                return false;
    return true;
}
int main()
{
    const int n = 4;
    const int m = 4;
    int x[n][m];
    readA2D(x, n, m);
    printA2D(x, n, m);
    if (isSortedRows(x, n, m) == true)
        std::cout << "Yes";
    else
        std::cout << "No";
    return 0;
}