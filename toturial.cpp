#include <iostream>
#include <cstring>

int main()
{
    char s[] = "The mississippi is long river.";
    std::cout << "s = \"" << s << "\"\n";
    char *p = strchr(s, ' ');
    std::cout << "strchr(s,' ') point to s[" << p - s << "].\n";
    p = strchr(s, 'e');
    std::cout << "strchr(s,'e') point to s[" << p - s << "].\n";
    std::cout <<strchr(s,'e') point to s[""
}