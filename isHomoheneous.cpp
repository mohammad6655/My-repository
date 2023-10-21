#include <iostream>
int lenght(char s[]);
int isHomogeneous(char s[]);
int main()
{
    char s[255];
    std::cout << "Enter a string: ";
    std::cin.getline(s, 255);
    if (isHomogeneous(s))
        std::cout << "String is Homogeneous";
    else
        std::cout << "String is not Homogeneous";
    return 0;
}
int lenght(char s[])
{
    int i;
    for (i = 0; i < s[i]; i++);
        return i;
}
int isHomogeneous(char s[])
{
    int i;
    int len = lenght(s);
    for (i = 0; i < len / 2; i++)
        if (s[i] != s[len - i - 1])
            return 0;
    return 1;
}