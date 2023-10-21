#include <iostream>

void removeIndex(int a[], int index, int *n)
{
    for (int i = index - 1; i < *n - 1; i++)
        a[i] = a[i + 1];
    (*n)--;
}
void read(int a[], int n)
{
    int i;
    std::cout << "Enter " << n << " numbers:";
    for (i = 0; i < n; i++)
        std::cin >> a[i];
}
void print(int a[], int n)
{
    int i;
    std::cout << "Array is: ";
    for (i = 0; i < n; i++)
        std::cout << "    " << a[i];
}
int main()
{
    int num[100], n, index;
    std::cout << "Enter n: ";
    std::cin >> n;
    read(num, n);
    while (1)
    {
        std::cout << "Enter index: ";
        std::cin >> index;
        if (index > n || index < 0)
            std::cout << "Enter index less than equql " << n << " and index >0\n";
        else
            break;
    }
    removeIndex(num, index, &n);
    print(num, n);
    return 0;
}