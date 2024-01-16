#include <iostream>

void deleteChar(char s[], int i);
void trim(char s[]);
int main()
{
    char s[80];
    std::cout << "Enter a string: ";
    std::cin >> s;
    trim(s);
    std::cout << "Result is: " << s;
    return 0;
}
void deleteChar(char s[], int i)
{
    int j;
    for (j = i; s[j]; j++)
        s[j] = s[j + 1];
    s[j] = '\0';
}
void trim(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        {
            deleteChar(s, i);
            i--;
        }
    }
}