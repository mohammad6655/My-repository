#include <iostream>

void read(int a[], int n);
int isSort(int a[], int n);
int main()
{
    int num[100], n;
    std::cout << "Enter n: ";
    std::cin >> n;
    read(num, n);
    if (isSort(num, n))
        std::cout << "Array is sorted.";
    else
        std::cout << "Array is not sort.";
    return 0;
}
void read(int a[], int n)
{
    int i;
    std::cout << "Enter " << n << " numbers: ";
    for (i = 0; i < n; i++)
        std::cin >> a[i];
}
int isSort(int a[], int n)
{
    int i;
    // for (i = 0; i < n - 1 && a[i] == a[i + 1]; i++)
        // ;
    if (a[i] < a[i + 1])
    {
        for (i = i; i < n - 1; i++)
            if (a[i] > a[i + 1])
                return 0;
    }
    else
    {
        for (i = i; i < n - 1; i++)
            if (a[i] < a[i + 1])
                return 0;
    }
    return 1;
}