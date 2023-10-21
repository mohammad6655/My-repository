#include <iostream>

using namespace std;
int NOT(int x)
{
    if (x == 1)
        return 0;
    else
        return 1;
}
int AND(int x, int y)
{
    if (x == 1 && y == 1)
        return 1;
    else
        return 0;
}
int OR(int x, int y)
{
    if (x == 1 || y == 1)
        return 1;
    else
        return 0;
}
int XOR(int x, int y)
{
    if ((x == 0 && y == 1) || (x == 1 && y == 0))
        return 1;
    else
        return 0;
}
int NAND(int x, int y)
{
    return NOT(AND(x, y));
}
int NOR(int x, int y)
{
    return NOT(OR(x, y));
}
int main()
{
    int a, b;
    for (;;)
    {
        cout << "Enter a , b: ";
        cin >> a >> b;
        if (a > 1 || b > 1 || a < 0 || b < 0)
            cout << "Please Enter 0 or 1 for a and b" << endl;
        else
            break;
    }
    cout << a << " AND " << b << " = " << AND(a, b) << endl;
    cout << a << " OR " << b << " = " << OR(a, b) << endl;
    cout << a << " XOR " << b << " = " << XOR(a, b) << endl;
    cout << a << " NAND " << b << " = " << NAND(a, b) << endl;
    cout << a << " NOR " << b << " = " << NOR(a, b) << endl;
    cout << "( " << a << " NOR ( " << a << " XOR " << b << ")) NAND " << b << ")=" << NAND(NOR(a, XOR(a, b)), b);
    return 0;
}