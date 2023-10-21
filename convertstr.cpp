#include <iostream>
#include <stdio.h>
#include <string.h>

void convert(char s[]);
int main()
{
    char str[80];
    std::cout << "Enter a string: ";
    std::cin.get(str, 80);
    std::cin.get();
    convert(str);
    std::cout << "Reverse is: " << str;
    return 0;
}
void convert(char s[])
{
    int i, len = strlen(s);
    char ch;
    for (i = 0; i < len / 2; i++)
    {
        ch = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = ch;
    }
}