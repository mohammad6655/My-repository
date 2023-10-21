#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num1,num2;
    /* input two numbers from user */
    cout<<"Enter any two numbers: ";
    cin>>num1>>num2;
    /* swap two numbers */
    cout<<"Num 1= "<<num1<<endl;
    cout<<"Num 2= "<<num2<<endl;
    num1^=num2;
    num2^=num1;
    num1^=num2;
    cout<<"Num1 after swapping = "<<num1<<endl;
    cout<<"Num2 after swapping = "<<num2<<endl;
    return 0;
}