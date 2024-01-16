#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <conio.h>

int main()
{
    int x;
    char ch;

    std::cout << "Enter any key " << '\n';

    while (ch = getch())
    {
        std::cout << "\n";

        srand(time(0));
        for (int j = 1; j <= 10; j++)
        {
            std::cout << (rand() % 6 + 1) <<std::setw(10);

            if (j % 5 == 0)
                std::cout << '\n';
        }
        std::cout << "Enter any key to continue" << '\n';
    }
    system("pause");
    return 0;
}
