// Delete (sorted array)
#include <iostream>
#include <conio.h>
using namespace std;

int bsearch(int a[], int low, int high, int key)
{
    int mid;
    if (low <= high)
    {
        mid = low + (high - low) / 2; // mid=(high+low)/2
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
        cout << "not found";
        return n;
    }
    for (int i = p; i <= n - 2; i++)
        a[i] = a[i + 1];
    return n - 1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 6;
    n = deleteElement(a, n, key);
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
    getch();
}