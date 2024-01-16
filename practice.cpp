#include <iostream>

#define N 32
void initArray(int a[]);
void fact(int a[], int number);
void printArray(int a[]);
int main()
{
    int a[N];
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    initArray(a);
    std::cout << "Fact " << number << " is ";
    fact(a, number);
    printArray(a);
    return 0;
}
void initArray(int a[])
{
    int i;
    for (i = 0; i <= N - 1; i++)
        a[i] = 0;
}
void printArray(int a[])
{
    int j = 0, i;
    while (a[j++] == 0)
        ;
    for (i = j - 1; i <= N - 1; i++)
        std::cout << a[i];
}
void fact(int a[], int number)
{
    int p, i, j, c;
    a[N - 1] = 1;
    for (i = 1; i <= number; i++)
    {
        c = 0;
        for (j = N - 1; j >= 1; j--)
        {
            a[j] = a[j] * i + c;
            if (a[j] > 9)
            {
                p = a[j] / 10;
                a[j] %= 10;
                c = p;
            }
            else
                c = 0;
        }
    }
}