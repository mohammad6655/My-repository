#include <iostream>

int strlen(char *);
void print(int len);
int main()
{
    char str[80];
    std::cout << "Enter string: ";
    std::cin.get(str, 80);
    std::cin.get();
    int len = strlen(str);
    print(len);
    return 0;
}
int strlen(char *s)
{
    int i = 0;
    while (*s)
    {
        s++;
        i++;
    }
    return i;
}
void print(int len) { std::cout << "Len is " << len; }