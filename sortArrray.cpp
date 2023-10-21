#include <iostream>

void readarray(int[], int);
void select_sort(int[], int);
void writearray(int[], int);
int main()
{
    int id[100], n;
    std::cout << "Enter n: ";
    std::cin >> n;
    readarray(id, n);
    select_sort(id, n);
    writearray(id, n);
    return 0;
}
void readarray(int id[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        std::cout << "Enter id[" << i + 1 << "]:";
        std::cin >> id[i];
    }
}
void select_sort(int id[], int n)
{
    int i, j, max, temp;
    for (i = 0; i < n; i++)
    {
        max = i;
        for (j = i + 1; j < n; j++)
            if (id[max] > id[j])
                max = j;
        temp = id[i];
        id[i] = id[max];
        id[max] = temp;
    }
}
void writearray(int id[], int n)
{
    int i;
    std::cout << '\n'
              << "Sorted output ";
    for (i = 0; i < n; i++)
        std::cout << '\n'
                  << "\t" << id[i];
}
