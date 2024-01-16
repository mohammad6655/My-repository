#include <iostream>
#include <stdio.h>

int len(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
        ;
    return i;
}
int lenNextWord(char s[], int index)
{
    int i, count = 0;
    for (i = 0; s[index + i]; i++)
        if (s[i + index] == '.' || s[i + index] == ',' || s[i + index] == ' ' || s[i + index] == '!')
            break;
        else
            count++;
    return (count);
}
void deleteWord(char s[], int index, int len)
{
    int i;
    for (i = index; s[i]; i++)
        s[i] = s[i + len];
    s[i] = '\0';
}
int main()
{
    char s[255];
    int i = 0;
    int wordLen = 0;
    std::cout << "Enter a string: ";
    std::cin>>s;
    int l = len(s);
    while (i < l)
    {
        wordLen = lenNextWord(s, i);
        if (wordLen == 2)
        {
            deleteWord(s, i, 2);
            i++;
        }
        else
            i += wordLen + 1;
    }
    std::cout << "Result is " << s;
    return 0;
}