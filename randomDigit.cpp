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
    for (int i = 0; i < 8; i++)
        std::cout << rand() << '\n';
    return 0;
}