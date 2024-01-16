// Template Queue class
#include <iostream>
#include <conio.h>
#include "queueCompositioon.h"

int main()
{
    Queue<int> Q;

    Q.enqueue(5);
    Q.enqueue(8);
    Q.enqueue(2);
    Q.enqueue(3);

    Q.printqueue();

    int x;

    while (!Q.isQueueEmpty())
    {
        Q.dequeue(x);
        Q.printqueue();
    }
    getch();
}