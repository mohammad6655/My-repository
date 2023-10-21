#include <iostream>
#include <conio.h>

int bsearch(int a[], int low, int high, int key)
{
    int mid;
    if (low <= high)
    {
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
    }
    return -1;
}
int main()
{
    int a[] = {6, 8, 9, 12, 16, 18, 19};
    int n = sizeof(a) / sizeof(a[0]);
    int p;
    int key = 18;
    p = bsearch(a, 0, n - 1, key);
    std::cout << p;
    getch;
}