#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int a, b;
    cout << "Enter a, b: ";
    cin >> a >> b;
    cout << "GCD is: " << gcd(a, b);
    return 0;
}