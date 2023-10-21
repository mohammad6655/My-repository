#include <iostream>

int main()
{
    char s[255];
    int ch[27] = {0};
    std::cout << "Enter a string: ";
    std::cin.getline(s, 255);
    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            ch[s[i] - 32 - 65]++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            ch[s[i] - 65]++;
    }
    for (int i = 0; i < 27; i++)
        if (ch[i] > 0)
            std::cout << "Accurence " << (char)(i + 97) << " is " << ch[i] << '\n';
    return 0;
}