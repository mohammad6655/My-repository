#include <iostream>

int main()
{
    int n;
    int x = 1;

    std::cout << "Enter the number of size:";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << x++ << "# ";
        }
        std::cout << '\n';
    }
    return 0;
}