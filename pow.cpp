#include <iostream>
#include <stdio.h>

double pow(float *, int *);
void print(int *);

int main()
{
    float base;
    int power;
    std::cout << "Enter base & power : ";
    std::cin >> base >> power;
    std::cout << base << " ^ " << power << "=" << pow(&base, &power);
    return 0;
}
double pow(float *b, int *n)
{
    int i;
    double result = 1.0;
    if (*n > 0)
        for (i = 1; i <= (*n); i++)
            result *= *b;
    else
        for (i = *n; i < 0; i++)
            result *= (float)1 / (*b);
    return (result);
}