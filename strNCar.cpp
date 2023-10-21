#include <iostream>
#include <cstring>

int main()
{
    char s1[] = "ABCDEFG";
    char s2[] = "XYZ";
    std::cout << "Before strcat(s1,s2):\n";
    std::cout << "\ts1= [" << s1 << "], length = " << strlen(s1) << '\n';
    std::cout << "\ts1= [" << s2 << "], length = " << strlen(s2) << '\n';
    strncat(s1, s2,2);
    std::cout << "After strcat(s1,s2):\n";
    std::cout << "\ts1 = [" << s1 << "], length = " << strlen(s1) << '\n';
    std::cout << "\ts1 = [" << s2 << "], length = " << strlen(s2) << '\n';
    return 0;
}