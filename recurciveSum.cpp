#include <iostream>

int sum(int a[], int n);
int main()
{
    int a[10] = {12, 2, 33, 4, 5, 67, 68, 88, 9, 150};
    std::cout << " Sum is " << sum(a, 10);
    return 0;
}
int sum(int a[], int n)
{
    if (n == 1)
        return (a[0]);
    else
        return (a[n - 1] + sum(a, n - 1));
}