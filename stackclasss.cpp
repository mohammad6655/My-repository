// Template Stack class test program.
#include <iostream>
#include <conio.h>
#include "stackcomposition.h"
// #include "stack.h"

int main()
{
    Stack<int> s;
    int x;

    s.push(4);
    s.push(2);
    s.push(7);
    s.printStack();

    s.pop(x);
    s.printStack();

    s.push(6);
    s.printStack();

    getch();
}