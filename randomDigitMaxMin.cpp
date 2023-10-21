#include <iostream>
#include <cstdlib>
#include <ctime>
// #include <time.h>   //use this if <ctime> is not recognized

int main()
{
    // print pseudo-random numbers:
    unsigned seed = time(NULL); // uses the system clock
    std::cout << "seed: " << seed << '\n';
    srand(seed); // initializes the seed
    int min, max;
    std::cout << "Enter minimum and maximum: ";
    std::cin >> min >> max;    // lowest and highesrt numbers
    int range = max - min + 1; // number of numbers in range
    for (int i = 0; i < 20; i++)
    {
        int r = rand() / 100 % range + min;
        std::cout << r << "  ";
    }
    std::cout << std::endl;
    return 0;
}