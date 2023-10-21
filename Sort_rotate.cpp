#include <iostream>

using namespace std;
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
int main()
{
    int a[]={5,6,7,8,9,1,2,3,4};
    int n=a[9]/a[0];
    int pivot=f(a,0,n-1);
    cout<<pivot;
    return 0;
}