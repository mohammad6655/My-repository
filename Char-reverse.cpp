#include <iostream>

using namespace std;
char reverse(char ch)
{
    return (((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ? ch ^ 32 : ch);
}
int main()
{
    char ch;
    cout << "Enter a char: ";
    cin >> ch;
    cout << "Reverse(" << ch << "):" << reverse(ch);
    return 0;
}
