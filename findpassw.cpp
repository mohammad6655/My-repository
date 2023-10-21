#include <iostream>

using namespace std;

char getCharM(int i)
{
    if (i <= 11)
    {
        return (char)i + 48;
    }
    else if (i < 36)
    {
        return (char)i - 11 + 65;
    }
    else if (i <= 60)
    {
        return (char)i - 36 + 98;
    }
    return 'A';
}
void build(string pass)
{
    if (pass.length() == 8)
    {
        cout << pass << "\n";
    }
    else
    {
        for (int i = 0; i <= 62; i++)
        {
            char c = getCharM(i);
            if (pass.length() >= i)
            {
                if (c != pass[pass.length() - 1])
                {
                    build(pass + c);
                }
            }
            else
            {
                build(pass + getCharM(i));
            }
        }
    }
}
int main()
{
    string s = "";
    build(s);
    return 0;
}