#include <iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1; i<num; i++)
        if(num%i==0){
            sum+=i;}
            
    if(sum==num)
        cout<<"your number is Perfect";

    else
        cout<<"your number is not Perfect";
    return 0;
}

