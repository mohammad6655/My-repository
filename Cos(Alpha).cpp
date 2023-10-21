#include <iostream>
#include <math.h>

#define sqr(a) a*a

using namespace std;
float calculateA(float , float , float );
int main()
{
    float b, c, alpha;
    cout << "Enter b, c, alpha: ";
    cin >> b >> c >> alpha;
    cout << "Result is: " << calculateA(b, c, alpha);
    return 0;
}
float calculateA(float b, float c, float alpha)
{
    return (sqrt(sqr(b) + sqr(c) - 2 * b * c * cos(alpha)));
}