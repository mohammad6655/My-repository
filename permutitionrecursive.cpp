#include <iostream>

#define N 5
unsigned char before[N];
unsigned int bNum = 0;
void permutition(int s, int n, unsigned char *a)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (s != n - 1)
        {
            before[bNum++] = a[i];
            permutition(s + 1, n, a);
            bNum--;
        }
        else
        {
            for (j = 0; j < n; j++)
                std::cout << before[j];
            std::cout << a[i] << "\t";
        }
    }
}
int main()
{
    unsigned char a[N] = {'A', 'B', 'C', 'D', 'E'};
    permutition(0, 5, a);
    return 0;
}