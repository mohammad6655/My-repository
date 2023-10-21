#include <iostream>
#include <stdio.h>

void strcopy(char[], char[]);
int main()
{
    char str1[255] = {'\0'}, str2[255] = {'\0'};
    std::cout << "Enter a string: ";
    std::cin.get(str1, 255);
    std::cin.get();
    strcopy(str2, str1);
    std::cout << "Result is " << str2;
    return 0;
}
void strcopy(char des[], char sou[])
{
    int i;
    for (i = 0; i < sou[i]; i++)
        des[i] = sou[i];
    des[i] = '\0';
}