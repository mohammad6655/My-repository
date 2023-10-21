#include <iostream>

using namespace std;

int main()
{
    string str = "Steve jobs founded the apple";
    string str2 = str.substr(6, 4);
    unsigned pos = str.find("the");
    string str3 = str.substr(pos);
    cout << str2 << ' ' <<pos<<' '<< str3 << '\n';
    return 0;
}
