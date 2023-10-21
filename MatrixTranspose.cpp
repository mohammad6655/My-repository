#include <iostream>

#define row 3
#define column 4

int main()
{
    int a[3][4], b[4][3];
    int i, j;
    for (i = 0; i < row; i++)
    {
        std::cout << "Enter " << column << " nubmer for row " << (i + 1) << " :";
        for (j = 0; j < column; j++)
            std::cin >> a[i][j];
    }
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            b[j][i] = a[i][j];
    for (i = 0; i < column; i++)
    {
        std::cout << "\n";
        for (j = 0; j < row; j++)
            std::cout << b[i][j] << "       ";
    }
    return 0;
}