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
void printCount(int a[])
{
    int i;
    for (i = 0; i < 100; i++)
        if (a[i])
            std::cout << "\nLen(" << i << " ) is " << a[i];
}
int main()
{
    char s[255];
    int countArray[100] = {0};
    int i = 0;
    int wordLen = 0;
    std::cout << "Enter a string: ";
    std::cin>>s;
    int l = len(s);
    while (i < l)
    {
        wordLen = lenNextWord(s, i);
        if (wordLen != 0)
            ++countArray[wordLen];
        i += wordLen + 1;
    }
    printCount(countArray);
    return 0;
}