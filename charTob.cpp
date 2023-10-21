#include <iostream>
#include <cstring>

int main()
{
    char c;
    while (std::cin.get(c))
    {
        if (c >= 'a' && c <= 'z')
            c += 'A' - 'a';
        std::cout.put(c);
        if (c == '\n')
            break;
    }
    return 0;
}