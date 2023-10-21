#include <iostream>

int prim(int[], int, int);
int main()
{
    int n, p[300], i, tedad{0};
    std::cout << "Enter n: \n";
    std::cin >> n;
    for (i = 2; i <= n; i++)
        if (prim(p, tedad, i))
            tedad++;
    std::cout << "Primery is: \n";
    for (i = 0; i < tedad; i++)
        std::cout << "    " << p[i];
    return 0;
}
int prim(int a[], int tedad, int num)
{
    int i;
    for (i = 0; i < tedad; i++)
        if (num % a[i] == 0)
            return 0;
    a[tedad] = num;
    return (1);
}