#include <iostream>

void read(float a[], int n);
void outerProduct(float a[], float b[], float c[][100], int n);
void print(float a[][100], int n);
int main()
{
    float num1[100], num2[100], num3[100][100], n;
    std::cout << "Enter n: ";
    std::cin >> n;
    read(num1, n);
    read(num2, n);
    outerProduct(num1, num2, num3, n);
    print(num3, n);
    return 0;
}
void read(float a[], int n)
{
    int i;
    std::cout << "Enter " << n << " Numbers: ";
    for (i = 0; i < n; i++)
        std::cin >> a[i];
}
void outerProduct(float a[], float b[], float c[][100], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            c[i][j] = a[i] * b[j];
}
void print(float a[][100], int n)
{
    std::cout << "Array product is \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << a[i][j] << "\t";
        std::cout << "\n";
    }
}