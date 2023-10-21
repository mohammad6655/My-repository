#include <iostream>

using namespace std;

double fact(int n)
{
    double f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
double pow(float x, float n)
{
    double p = 1.0;
    for (int i = 1; i <= n; i++)
        p *= x;
    return p;
}
double sigma(int x, int n)  
{
    double s = 0;
    for (int i = 1; i <= n; i++)
        s += pow(x, n) / fact(i);
    return s;
}
int main()
{
    int x, n;
    cout << "Enter x, n: ";
    cin >> x >> n;
    cout << "Result is: " << sigma(x, n);
    return 0;
}