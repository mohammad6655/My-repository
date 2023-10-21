#include <iostream>

using namespace std;
int isPrime(int n)
{
    for (int i = 2; i <= (int)n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int countPrime(int x, int y)
{
    int count = 0;
    for (int i = x; i <= y; i++)
        if (isPrime(i))
            count++;
    return count;
}
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Count is: " << countPrime(x, y);
    return 0;
}