#include <iostream>
#include <stdio.h>

int search_string(char s1[], char s2[]);
int main()
{
    char s1[255], s2[255];
    int location;
    std::cout << "Enter string 1: ";
    std::cin.get(s1, 255);
    std::cin.get();
    std::cout << "Enter string 2: ";
    std::cin.get(s2, 255);
    std::cin.get();
    location = search_string(s1, s2);
    if (location != 0)
        std::cout << "Found in location " << location;
    else
        std::cout << "Not found";
    std::cin.get();
    return 0;
}
int search_string(char s1[], char s2[])
{
    int i, j, k;
    for (i = 0; s2[i]; i++)
    {
        k = i;
        j = 0;
        while (s1[j] == s2[k] && s1[j] && s2[k])
        {
            j++;
            k++;
        }
        if (!s1[j])
            return (i + 1);
        if (!s1[j] && !s2[k])
            return (i + 1);
    }
    return 0;
}