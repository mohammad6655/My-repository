#include <iostream>
#include <conio.h>
int prim(long int[], long int, long int);
void find_two_numbers(long int[], long int *, long int *, long int, long int);
int main()
{
    long int n, p[400], i, j, tedad;
    char done = 'Y';
    do
    {
        tedad = 0;
        std::cout << "Enter n: ";
        std::cin >> n;
        if (n % 2 == 1)
        {
            std::cout << "Enter a even number\n";
            continue;
        }
        for (i = 2; i <= n; i++)
            if (prim(p, tedad, i))
                tedad++;
        find_two_numbers(p, &i, &j, tedad - 1, n);
        std::cout << n << " = " << i << " + " << j;
        std::cout << '\n'
                  << "You want to continue(y/n): ";
        done = getche();
        std::cout << '\n';
    } while (done != 'n' && done != 'N');
    return 0;
}
int prim(long int a[], long int tedad, long int num)
{
    long int i;
    for (i = 0; i < tedad; i++)
        if (num % a[i] == 0)
            return 0;
    a[tedad] = num;
    return 1;
}
void find_two_numbers(long int p[], long int *n1, long int *n2, long int tedad, long int n)
{
    int i, j;
    for (i = 0; i < tedad - 1; i++)
        for (j = i + 1; j < tedad; j++)
            if ((p[i] + p[j]) == n)
            {
                *n1 = p[i];
                *n2 = p[j];
                return;
            }
}