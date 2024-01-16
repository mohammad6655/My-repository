#include <iostream>

void readArray(int a[], int n);
void findMod(int a[], int n, int &maxCount, int &mean);
int main()
{
    int a[10];
    int maxCount = 0, mean;
    readArray(a, 10);
    findMod(a, 10, maxCount, mean);
    std::cout << "Number is " << mean << "\tMod is " << maxCount;
    return 0;
}
void readArray(int a[], int n)
{
    int i;
    std::cout << "Enter " << n << " numbers: ";
    for (i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
}
void findMod(int a[], int n, int &maxCount, int &mean)
{
    int i, j, count;
    for (i = 0; i <= n; i++)
    {
        count = 0;
        for (j = i; j <= n; j++)
            if (a[i] == a[j])
                count++;
        if (count > maxCount)
        {
            maxCount = count;
            mean = a[i];
        }
    }
}