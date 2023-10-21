#include <iostream>

using namespace std;
void divitionByk(long int n, int k);
int main()
{
    int n, k;
    cout << "Enter n, k: ";
    cin >> n >> k;
    cout << "Division by " << k << " is: ";
    divitionByk(n, k);
    return 0;
}
void divitionByk(long int n, int k)
{
    if (n == 0)
        return;
    if (n % k == 0)
        cout << "   " << n;
    divitionByk(n - 1, k);
}