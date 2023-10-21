#include <iostream>
int find(int num[], int a, int last);
void print(int num[], int count[], int last);
int main()
{
    int num[10], count[10] = {0}, i, last = 0, a;
    for (i = 0; i < 10; i++)
    {
        std::cout << "Enter number " << (i + 1) << ": ";
        std::cin >> a;
        int position = find(num, a, last);
        if (position != -1)
        {
            count[position]++;
            num[last++] = a;
        }
        else
        {
            count[last]++;
            num[last++] = a;
        }
    }
    print(num, count, last);
    return 0;
}
int find(int num[], int a, int last)
{
    int i;
    for (i = 0; i < last; i++)
        if (num[i] == a)
            return i;
    return -1;
}
void print(int num[], int count[], int last)
{
    int i;
    for (i = 0; i < last; i++)
        if (count[i])
        {
            std::cout << "\n"
                      << num[i] << "Occurs " << count[i] << " Time(s) At positions " << (i + 1);
            int a = num[i];
            for (int j = i + 1; j < last; j++)
                if (num[j] == a)
                    std::cout << " ," << (j + 1);
        }
}