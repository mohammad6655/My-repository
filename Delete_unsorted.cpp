// Delete (unsorted array)
#include <iostream>
#include <conio.h>
using namespace std;

int lsearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (key == a[i])
            return i;
    return -1;
}
int deleteElement(int a[], int n, int key)
{
    int position;
    position = lsearch(a, n, key);
    if (position == -1)
    {
        cout << "not found";
        return n;
    }
    for (int i = position; i <= n - 2; i++)
        a[i] = a[i + 1];
    return n - 1;
}
int main()
{
    int a[] = {9, 5, 8, 7, 6, 2, 4, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 6;
    n = deleteElement(a, n, key);
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
    getch();
}