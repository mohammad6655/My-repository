#include <iostream>

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
int f(int a[], int low, int high)
{
    if (high < low)
        return -1;
    if (high == low)
        return low;
    int mid = (low + high) / 2;
    if (mid < high && a[mid] > a[mid + 1])
        return mid;
    if (mid > low && a[mid] < a[mid - 1])
        return (mid - 1);
    if (a[low] >= a[mid])
        return f(a, low, mid - 1);
    return f(a, mid + 1, high);
}
int search(int a[], int n, int key)
{
    int pivot = f(a, 0, n - 1);
    if (pivot == -1)
        return bsearch(a, 0, n - 1, key);
    if (a[pivot] == key)
        return pivot;
    if (a[0] <= key)
        return bsearch(a, 0, pivot - 1, key);
    return bsearch(a, pivot + 1, n - 1, key);
}
int main()
{
    int a[9] = {5, 6, 7, 8, 9, 1, 2, 3, 4};
    cout << search(a, 9, 9);
    return 0;
}