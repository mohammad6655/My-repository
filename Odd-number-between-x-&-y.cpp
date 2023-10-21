#include <iostream>

using namespace std;
void display(int x, int y)
{
    for (int i = x; i <= y; i++)
        if (i % 2 != 0)
            cout << "\t" << i;
}
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Display(x, y) is: ";
    display(x, y);
    return 0;
}