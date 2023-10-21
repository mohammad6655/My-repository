#include <iostream>
#include <stdio.h>

void getstr(char s[]);
void str_to_float(char s[], double &);
void print(double);
int main()
{
    char str[80];
    double num;
    // std::clrscr();
    getstr(str);
    str_to_float(str, num);
    print(num);
    return 0;
}
void getstr(char str[])
{
    std::cout << "Enter a string (a.b): ";
    std::cin.get(str, 80);
    std::cin.get();
}
void str_to_float(char s[], double &result)
{
    int len, i, j;
    double digit1 = 0.0, digit2 = 0.0, pow;
    for (len = 0; s[len]; len++)
        ; // len=strlen(s);
    for (i = 0; s[i] != '.' && s[i]; i++)
        ; // i=strchr(s,'.;);
    pow = 0.1;
    for (j = 0; j < i; j++)
    {
        digit2 += (s[j] - 48) * pow;
        pow *= 0.1;
    }
    pow = 1.0;
    for (j = len - 1; j > i; j--)
    {
        digit1 += (s[j] - 48) * pow;
        pow *= 10.0;
    }
    result = digit1 + digit2;
}
void print(double result) { std::cout << '\n'
                                      << " ***** reslult is: " << result; }