#include <iostream>

using namespace std;
int sumDive(int n)
{
    int sum = 0;
    for (int j = 1; j < (int)n / 2 + 1; j++)
        if (n % j == 0)
            sum += j;
    return sum;
}
int main()
{
    int i, n, sum;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 3; i <= n; i++)
    {
        sum = sumDive(i);
        if (i == sumDive(sum) && i != sum)
            cout << "Numbers " << i << " and " << sum << " are friendly" << endl;
    }
    return 0;
}
