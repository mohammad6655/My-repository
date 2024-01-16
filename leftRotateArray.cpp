#include <iostream>

void readArray(int a[], int n)
{
    int i;
    std::cout << "Enter " << n << " numbers: ";
    for (i = 0; i < n; i++)
        std::cin >> a[i];
}
void leftRotate(int a[], int b[], int n, int k)
{
    int i;
    int location;
    for (i = 0; i < n; i++)
    {
        location = i - k;
        if (location < 0)
            location = n + location;
        b[location] = a[i];
    }
}
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        std::cout << "    " << a[i];
}
int main()
{
    int num1[10], num2[10], n = 10, k;
    readArray(num1, n);
    std::cout << "Enter k: ";
    std::cin >> k;
    leftRotate(num1, num2, n, k);
    std::cout << "Array 1: ";
    printArray(num1, n);
    std::cout << "\nArray 2: ";
    printArray(num2, n);
    return 0;
}