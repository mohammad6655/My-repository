#include <iostream>
#include <stdio.h>

void input(int[], int);
void convert(int a[], int n);
void print(int a[], int n);
int main()
{
    static int num[100] = {0}, n;
    std::cout << "Enter n: ";
    std::cin >> n;
    input(num, n);
    std::cout << "Input is: ";
    print(num, n);
    convert(num, n);
    std::cout << "\nConvert is: ";
    print(num, n);
    return 0;
}
void input(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        std::cout << "Enter number [" << i + 1 << "]:";
        std::cin >> a[i];
    }
}
void convert(int a[], int n)
{
    int i, temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        std::cout << "    " << a[i];
}