#include <iostream>
#include <cmath>
 
using namespace std;
 
double my_ln(double x)
{
    if (x == 1) return 0;
    double s = 0;
    if (abs(-1 + x) < 1)
    {
        for (int k = 1; k <= 1000; k++)
            s += pow(-1, k) * pow(-1 + x, k) / k;
        return -s;
    } else return -my_ln(1 / x);
}
 
double my_log(double x, double base)
{
    return my_ln(x) / my_ln(base);
}
 
int main()
{
    cout << "x = "; double x,base;
    cin >> x;
    cout << "ln(x) = " << my_ln(x) << endl;
    cout<<"Enter x,base for log(x,base): ";
    cin>>x>>base;
    cout << "log(x) = " << my_log(x,base) << endl;
    return 0;
}