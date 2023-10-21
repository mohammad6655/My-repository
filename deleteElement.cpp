#include <iostream>
#include <conio.h>

int bsearch(int a[], int low, int high, int key)
{
    int mid;
    if (low <= high)
    {

        mid = low + (high - low) / 2;
        if (key == a[mid])
            return mid;
        if (key < a[mid])
            return bsearch(a, low, mid - 1, key);
        if (key > a[mid])
            return bsearch(a, mid + 1, high, key);
    }
    return -1;
}
int deleteElement(int a[], int n, int key)
{
    int p;
    p = bsearch(a, 0, n - 1, key);
    if (p == -1)
    {
        std::cout << "Digit not found.";
        return n;
    }
    for (int i = p; i < n - 2; i++)
        a[i] = a[i + 1];
    return n - 1;
}
int main()
{
    int a[10] ,n;
    std::cout<<"Enter number array: ";
    std::cin>>n;
    std::cout << "Enter array element: ";
    // int n = sizeof(a) / sizeof(a[0]);
    for (int j = 0; j < n; j++)
        std::cin >> a[j];
    int p;
    int key = 4;
    n = deleteElement(a, n, key);
    // p = bsearch(a, 0, n - 1, key);
    for (int i = 0; i < n; i++)
        std::cout << a[i] << '\t';
    getch;
}