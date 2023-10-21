// A iterative binary search function.
#include <iostream>
#include <conio.h>

using namespace std;
int ibsearch(int a[], int low, int high, int key)
{
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (key == a[mid])
            return mid;
        if (key > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 6;
    int p;

    p = ibsearch(a, 0, n - 1, key);
    cout << p;
    getch();
}