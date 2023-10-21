#include <iostream>
#include <math.h>
using namespace std;
int reverse(int n)
{
    int p;
    if (n < 10)
        return n;
    else
    {
        p = floor(log10(n) + 1);   //Count the number of digits
        return ((n % 10) * pow(10, p - 1) + reverse(n / 10));
    }
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Result is: " << reverse(n);
    return 0;
}