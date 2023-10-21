#include <iostream>
#include <stdio.h>

void concat(char *, char *, char *);
int main()
{
    char str1[80], str2[80], str3[80];
    std::cout << "Enter string 1: ";
    std::cin.get(str1, 80);
    std::cin.get();
    std::cout << "Enter string 2: ";
    std::cin.get(str2, 80);
    std::cin.get();
    std::cout << "Enter string 3: ";
    std::cin.get(str3, 80);
    std::cin.get();
    concat(str1, str2, str3);
    std::cout << "String1= " << str1;
    std::cin.get();
    return 0;
}
void concat(char *s1, char *s2, char *s3)
{
    while (*s1)
        s1++;
    while (*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    while (*s3)
    {
        *s1 = *s3;
        s1++;
        s3++;
    }
    *s1 = '\0';
}