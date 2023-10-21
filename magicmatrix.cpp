#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void fill_matrix(int matrix[20][20], int n);
void disp_matrix(int matris[20][20], int n);
void test_range(int *i1, int *j1, int n);

int main()
{
    int n, matrix[20][20] = {0};
    std::cout << "Enter n: ";
    std::cin >> n;
    fill_matrix(matrix, n);
    disp_matrix(matrix, n);
    return 0;
}
void fill_matrix(int matrix[20][20], int n)
{
    int i, j, i1, j1;
    n--;
    i = 0;
    j = n / 2;
    matrix[i][j] = 1;
    for (int m = 1; m < (n + 1) * (n + 1); m++)
    {
        i1 = i - 1;
        j1 = j - 1;
        test_range(&i1, &j1, n);
        if (matrix[i1][j1] != 0)
        {
            i1 = i + 1;
            j1 = j;
            test_range(&i1, &j1, n);
        }
        matrix[i1][j1] = m + 1;
        i = i1;
        j = j1;
    }
}
void test_rage(int *i1, int *j1, int n)
{
    if (*i1 > n)
        *j1 = 0;
    if (*i1 < 0)
        *i1 = n;
    if (*j1 > n)
        *j1 = 0;
    if (*j1 < 0)
        *j1 = n;
}
void disp_matrix(int matrix[20][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (matrix[i][j] < 10)
                std::cout << "     " << matrix[i][j];
            else if (matrix[i][j] < 100)
                std::cout << "       " << matrix[i][j];
            else
                std::cout << "       " << matrix[i][j];
        std::cout << std::endl;
    }
}