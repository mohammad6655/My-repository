#include <iostream>

void read(int a[100][100], int n);
void print(int a[100][100], int n);
void rotate(int a[100][100], int n);
int main()
{
    int num1[100][100], n;
    std::cout << "Enter n: ";
    std::cin >> n;
    read(num1, n);
    std::cout << "Primary array is: \n";
    print(num1, n);
    rotate(num1, n);
    std::cout << "Rotated array is \n";
    print(num1, n);
    return 0;
}
void read(int a[100][100], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        std::cout << "Enter " << n << " numbers for row " << (i + 1) << ":";
        for (j = 0; j < n; j++)
            std::cin >> a[i][j];
    }
}
void print(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << a[i][j] << "\t";
        std::cout << "\n";
    }
}
void rotate(int a[100][100], int n)
{
    int b[100][100], i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            b[j][n - 1 - i] = a[i][j];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = b[i][j];
}