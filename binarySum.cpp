#include <iostream>
#include <stdio.h>
#include <string.h>

int check(char[]);
void right(char s[], int);
void val(char s[], int len);
void string(char s[], int len);
inline void addint(char s1[], char s2[], char s3[], int len);
int main()
{
    char a1[33] = {'\0'}, a2[33] = {'\0'}, result[34] = {0};
    while (1)
    {
        std::cout << "Enter a1: ";
        std::cin.get(a1, 32);
        std::cin.get();
        if (check(a1) == 0)
        {
            std::cout << "Enter only 0 & 1";
        }
        else
            break;
    }
    while (1)
    {
        std::cout << '\n'
                  << "Enter a2:";
        std::cin.get(a2, 32);
        std::cin.get();
        if (check(a2) == 0)
        {
            std::cout << "Enter onley 0 & 1";
        }
        else
            break;
    }
    right(a1, 32);
    right(a2, 32);
    val(a1, 32);
    val(a2, 32);
    addint(a1, a2, result, 32);
    string(a1, 32);
    string(a2, 32);
    string(result, 33);
    std::cout << '\n'
              << "  " << a1;
    std::cout << '\n'
              << "  " << a2;
    std::cout << '\n';
    for (int i = 0; i < 33; i++)
        std::cout << "=";
    std::cout << '\n'
              << result;
    return 0;
}
int check(char s[])
{
    int i;
    for (i = 0; i < strlen(s); i++)
        if (!(s[i] >= '0' && s[i] <= '1'))
            return 0;
    return 1;
}
void right(char s[], int k)
{
    int i, len, j;
    len = strlen(s);
    j = 0;
    if (len - 1 < k)
    {
        for (i = len - 1; i >= 0; i--)
        {
            s[k - 1 - j] = s[i];
            j++;
        }
        s[k] = '\0';
        for (i = 0; i < k - len; i++)
            s[i] = '0';
    }
}
void addint(char s1[], char s2[], char s3[], int len)
{
    int i, carry = 0;
    for (i = 0; i <= len; i++)
        s3[i] = '0';
    s3[len + 1] = '0';
    for (i = len - 1; i >= 0; i--)
    {
        s3[i + 1] = (s2[i] + s1[i] + carry) % 2;
        carry = (s2[i] + s1[i] + carry) / 2;
    }
    s3[0] = carry;
}
void val(char s[], int len)
{
    int i;
    for (i = 0; i < len; i++)
        s[i] -= 48;
}
void string(char s[], int len)
{
    int i;
    for (i = 0; i < len; i++)
        s[i] += 48;
}