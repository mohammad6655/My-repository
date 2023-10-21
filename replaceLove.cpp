#include <iostream>

int len(char s[])
{
    int i;
    for (i = 0; s[i]; i++);
        return i;
}
int nextWord(char s[], int index)
{
    int i;
    for (i = 0; s[index + i]; i++)
        if (s[i + index] == '.' || s[i + index] == ',' || s[i + index] == ' ' || s[i + index] == '!')
            break;
    return (i);
}
void replaceLove(char s[], int index)
{
    char love[5] = "love";
    for (int i = 0; i < 4; i++)
    {
        s[i + index] = love[i];
    }
}
int main()
{
    char s[255];
    int i = 0;
    int wordLen;
    std::cout << "Enter a string: ";
    std::cin.get(s, 255);
    int l = len(s);
    while (i < 1)
    {
        wordLen = nextWord(s, i);
        if (wordLen == 4)
            replaceLove(s, i);
        i += wordLen + 1;
    }
    std::cout << "Result = " << s;
    return 0;
}