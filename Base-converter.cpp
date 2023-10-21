#include <iostream>
#include <math.h>
using namespace std;
void print(char);
void DecToMBase(unsigned long int, char);
unsigned long int readNum(char);
char readBase();
int main()
{
    unsigned long int x;
    unsigned short int oBase, dBase;
    cout << "Enter n base: ";
    oBase = readBase();
    cout << "Enter your number in " << oBase << " :";
    x = readNum(oBase);
    cout << "Enter m base: ";
    dBase = readBase();
    DecToMBase(x, dBase);
    return 0;
}
// ****************************************
// function print echo a digit in screen
// ****************************************
void print(char c)
{
    if ((c >= 0) && (c <= 9))
        cout << static_cast<unsigned int>(c);
    else
        cout << (char)('A' + c - 10);
}
// ****************************************
// conver base 10 to m
// ****************************************
void DecToMBase(unsigned long int x, char m)
{
    long int p = 0, i, k;
    while (x >= m)
        for (i = 0;; i++)
            if (x < pow(m, i))
            {
                k = static_cast<long int>(floor(x / pow(m, i - 1)));
                x %= static_cast<long int>(ceill(pow(m, i - 1)));
                for (int j = 1; j < p - i; j++)
                    print(0);
                print((char)k);
                p = i;
                break;
            }
    // end of while loop
    for (int j = 1; j < p - 1; j++)
        print(0);
    print((char)x);
}
// *************************************
// read number in base
// *************************************
unsigned long int readNum(char base)
{
    unsigned long int num = 0;
    for (char ch = 0, i = 0; ch != 13; i++)
    {
        cin >> ch;
        if ((ch >= '0') && (ch <= base + '0' - 1) && (base <= 10))
        {
            num *= base;
            num += (ch - '0');
        }
        else if (((ch >= '0') && (ch <= '9')) && ((base >= 10) && (base <= 16)))
        {
            num *= base;
            num += (ch - '0');
        }
        else if ((ch >= 'A') && (ch <= 'A' + base - 11) && (base >= 11) && (base <= 16))
        {
            num *= base;
            num += (ch - 'A' + 10);
        }
        else if ((ch >= 'a') && (ch <= 'a' + base - 11) && (base >= 10) && (base <= 16))
        {
            num *= base;
            num += (ch - 'a' + 10);
        }
        else if (ch == 13)
            ;
        else
            ch = '\a';
        cout << ch;
    }
    cout << endl;
    return num;
}
// *************************************
// read base (2<= base <= 16)
// *************************************
char readBase()
{
    int base;
    cin >> base;
    while (!((base >= 2) && (base <= 16)))
    {
        cout << "\a" << endl
             << "Base not suport enter again: ";
        cin >> base;
    }
    return base;
}