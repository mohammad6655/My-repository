#include <iostream>

using namespace std;
int fact(int k)
{
    int f = 1;
    for (int i = 1; i <= k; i++)
        f *= i;
    return f;
}
double pow(float x, float n)
{
    if (n == 1)
        return 1;
    double p = 1.0;
    for (int i = 1; i <= n; i++)
    {
        p *= x;
    }
    return p;
}
int main()
{
    int n, x, p;
    cout << "Enter x,n: ";
    cin >> x >> n;
    p = fact(n);
    cout << pow((float)x, p);
    return 0;
}