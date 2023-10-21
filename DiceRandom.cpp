#include <iostream>
#include <stdlib.h>

int main()
{
    long int tas[13] = {0};
    long int count[13] = {0, 0, 1000, 2000, 3000, 4000, 5000, 6000, 5000, 4000, 3000, 2000, 1000};
    int tas1, tas2;
    long int i = 1;
    // randomize();
    while (i <= 36000)
    {
        tas1 = rand() % 6 + 1;
        tas2 = rand() % 6 + 1;
        tas[tas1 + tas2]++;
        i++;
    }
    std::cout << "j\tReal\tRandom\tDiffernt";
    std::cout << "\n==\t====\t=====\t======";
    for (int j = 2; j <= 12; j++)
    {
        std::cout << "\n"
                  << j << "\t" << count[j] << "   \t" << tas[j] << "\t" << (count[j] - tas[j]);
    }
    return 0;
}