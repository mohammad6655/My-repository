#include <iostream>

int a(char *s)
{
    char *p;
    p = s;
    while (*p)
        p++;
    return (p - s);
}
// int test(char *s)
// {
//     int i;
//     for (i = 0; *(s + i); i++)
//         ;
//     return (i);
// }