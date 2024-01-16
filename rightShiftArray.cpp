#include <iostream>

#define N 10

void rightShift(int x[], int m);
void printArray(int a[]);
int main()
{
    int a[N] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int m;
    std::cout << "Enter a number 1 to 10: ";
    std::cin >> m;
    std::cout << "First Array " << '\n';
    printArray(a);
    rightShift(a, m);
    std::cout << '\n';
    std::cout << "Shift Array " << '\n';
    printArray(a);
    return 0;
}
void rightShift(int x[], int m)
{
    int x1[N];
    int i;
    for (i = (N - m); i < N; i++)
        x1[i - N + m] = x[i];
    for (i = (N - m - 1); i >= 0; i--)
        x[i + m] = x[i];
    for (i = 0; i <= (m - 1); i++)
        x[i] = x1[i];
}
void printArray(int a[])
{
    int i;
    for (i = 0; i < N; i++)
        std::cout << a[i] << "\t";
}