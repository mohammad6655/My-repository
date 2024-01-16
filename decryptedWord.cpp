//Decryption simple word=(decrypted word-k)%26
#include <iostream>
#include <stdio.h>

void decryption(char s[], int k)
{
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = (s[i] - 97 - k) % 26 + 97;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (s[i] - 65 - k) % 26 + 65;
}
int main()
{
    char s[80];
    int k;
    std::cout << "Enter a string: ";
    gets(s);
    std::cout << "Enter k: ";
    std::cin >> k;
    decryption(s, k);
    std::cout << "Decrypted string is " << s;
    return 0;
}