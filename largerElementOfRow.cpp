//larger element of each row
#include <iostream>
#include <string.h>

void readarray(int a[4][5]);
void writearray(int a[4][5]);
void findmaxrow(int a[4][5]);

int main()
{
    int a[4][5] = {0};
    readarray(a);
    findmaxrow(a);
    std::cout << "\t*********result*********";
    writearray(a);
    return 0;
}
void readarray(int a[4][5])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        std::cout << "Enter row(" << i + 1 << "):";
        for (j = 0; j < 4; j++)
            std::cin >> a[i][j];
    }
}
void findmaxrow(int a[4][5])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        a[i][4] = a[i][0];
        for (j = 1; j < 4; j++)
            if (a[i][4] < a[i][j])
                a[i][4] = a[i][j];
    }
}
void writearray(int a[4][5])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        std::cout << '\n';
        for (j = 0; j < 4; j++)
            std::cout << "    " << a[i][j];
        std::cout << "\t  " << a[i][4];
    }
}