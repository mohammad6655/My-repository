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
bool EqualAllNotPer(int a[][4], int n, int m)
{
    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < m - 1; j++)
            if (a[1][1] != a[i][j])
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
    if (EqualAllNotPer(x, n, m) == true)
        std::cout << "Yes";
    else
        std::cout << "No";
    return 0;
}