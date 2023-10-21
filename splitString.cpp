#include <iostream>

int split(char s[], char s1[][30]);
int lenght(char s[]);
int main()
{
    char s[255];
    std::cout << "Enter a string: ";
    std::cin.getline(s, 255);
    char s1[100][30];
    int word = split(s, s1);
    int count1_5 = 0, count6_12 = 0, count12_ = 0;
    for (int i = 0; i <= word; i++)
    {
        int len = lenght(s1[i]);
        if (len <= 5)
            ++count1_5;
        else if (len <= 12)
            ++count6_12;
        else
            ++count12_;
    }
    std::cout << "Count of word between 1 to 5 char is " << count1_5;
    std::cout << "\nCount of word between 5 to 12 char is " << count6_12;
    std::cout << "\nCount of word more then 12 char is " << count12_;
}
int length(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
        ;
    return i;
}
int split(char s[], char s1[][30])
{
    int i, word = 0, k = 0;
    for (i = 0; i < s[i]; i++)
        if (s[i] == ' ')
        {
            s1[word][k] = '\0';
            word++;
            k = 0;
        }
        else
            s1[word][k++] = s[i];
    return word;
}