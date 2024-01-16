#include <iostream>

int isPrime(int n)
{
    for (int i = 2; i <= (int)n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int sumPrime(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (isPrime(a[i]))
            sum += a[i];
    return (sum);
}
void readArray(int a[], int n)
{
    int i;
    std::cout << "Enter " << n << " numbers: ";
    for (i = 0; i < n; i++)
        std::cin >> a[i];
}
void printArray(int a[], int n, int sum)
{
    int i;
    std::cout << "\nResult is ";
    for (i = 0; i < n; i++)
        if (a[i] > sum)
            std::cout << "\t" << a[i];
}
int main()
{
    int num[100], n;
    std::cout << "Enter n: ";
    std::cin >> n;
    readArray(num, n);
    int sum = sumPrime(num, n);
    printArray(num, n, sum);
    return 0;
}