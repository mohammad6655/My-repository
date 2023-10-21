#include <iostream>
#include <math.h>
using namespace std;
int main()
{
const double SMALLFRACTION = 1.0E-8;
double x , r;
cout << "Enter number : ";
cin >> x;
r = x / 2.0;
while(fabs(x-r*r) > SMALLFRACTION*x)
{
r = 0.5 *(x / r + r);
}
cout << "Number was : " << x << "\nroot is: "<< r << endl;
return 0;
}