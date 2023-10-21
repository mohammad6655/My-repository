// (1+(x^n)/1)^2+(1+(x^(n-1))/2)^2+...+(1+(x^1)/n)^n

#include <iostream>

using namespace std;
double pow(double x, int n);
int main()
{
    double sum = 0, x;
    int n;
    cout << "Enter x, n: ";
    cin >> x >> n;
    for (int i = 1; i <= n; i++)
    {
        double p1 = pow(x, n - i + 1);
        double p2 = pow(1 + p1 / i, i);
        sum += p2;
    }
    cout << "Sum is: " << sum;
    return 0;
}
double pow(double x, int n)
{
    double p = 1;
    for (int i = 1; i <= n; i++)
        p *= x;
    return p;
}