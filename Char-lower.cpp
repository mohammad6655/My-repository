#include <iostream>

using namespace std;
char lower(char ch)
{
    return ((ch >= 'A' && ch <= 'Z') ? ch | 32 : ch);
}
int main()
{
    char ch;
    cout << "Enter a char: ";
    cin >> ch;
    cout << "Lower(" << ch << "):" << lower(ch);
}