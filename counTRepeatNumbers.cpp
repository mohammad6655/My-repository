#include <iostream>

void read(int a[], int n);
int count(int a[], int n, int x);
int main()
{
    int num[100], n, value;
    std::cout << "Enter n: ";
    std::cin >> n;
    read(num, n);
    std::cout << "Enter value: ";
    std::cin >> value;
    std::cout << "Count is: " << count(num, n, value);
    return 0;
}
void read(int a[], int n)
{
    int i;
    std::cout << "Enter " << n << " numbers: ";
    for (i = 0; i < n; i++)
        std::cin >> a[i];
}
int count(int a[], int n, int x)
{
    int c = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            c++;
    return c;
}