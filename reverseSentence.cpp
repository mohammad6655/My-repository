#include <iostream>

void reverse(char s[]);
int lenght(char s[]);
int main()
{
    char s[255];
    std::cout << "Enter a string: ";
    std::cin.getline(s, 255);
    reverse(s);
    std::cout << "Reverse is: " << s;
    return 0;
}
int lenght(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
        ;
    return i;
}
void revese(char s[])
{
    int i;
    char ch;
    int len = lenght(s);
    for (i = 0; i < len / 2; i++)
    {
        ch = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = ch;
    }
}