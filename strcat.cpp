#include <iostream>
#include <stdio.h>

void strcat(char[], char[]);
int main()
{
    char str1[80], str2[80];
    std::cout << "Enter string1: ";
    std::cin.get(str1, 80);
    std::cin.get();
    std::cout << "Enter string 2: ";
    std::cin.get(str2, 80);
    strcat(str1, str2);
    std::cout << "Result is: " << str1;
    return 0;
}
void strcat(char s1[], char s2[])
{
    int i, j;
    for (i = 0; s1[i]; i++)
        ;
    for (j = 0; s2[j]; i++, j++)
        s1[i] = s2[j];
    s1[i] = '\0';
}