#include "iostream"

void readArray(int a[], int n);
void countArray(int a[], int count[], int n);
void printArray(int a[], int count[], int n);
int find(int a[], int n, int value);
int main()
{
    const int n = 10;
    int a[n] = {0}, count[n] = {0};
    readArray(a, n);
    countArray(a, count, n);
    printArray(a, count, n);
    return 0;
}
void readArray(int a[], int n)
{
    std::cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
}
void countArray(int a[], int count[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i] == a[j])
                count[i]++;
}
void printArray(int a[], int count[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (find(a, i, a[i]) == -1)
            std::cout << a[i] << "\t" << count[i] << "\n";
    }
}
int find(int a[], int n, int value)
{
    for (int i = 0; i < n; i++)
        if (a[i] == value)
            return i;
    return -1;
}