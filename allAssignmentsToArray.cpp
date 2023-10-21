#include <iostream>

int main()
{
    int number[5];
    int *p;
    p = number;
    *p = 10;
    p++;
    *p = 20;
    p = &number[2];
    *p = 30;
    p = number + 3;
    *p = 40;
    p = number;
    *(p + 4) = 50;
    for (int n = 0; *(p + 4) < 5; n++)
        std::cout << number[n] << ",";

    return 0;
}
