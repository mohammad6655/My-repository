#include <iostream>
#include <conio.h>

struct Queue
{
    int *a;
    int rear;
    int front;
    int size;
    Queue(int s)
    {
        a = new int[s];
        front = -1;
        rear = -1;
        size = s;
    }
    void add(int item);
    int del();
    void show();
};
void Queue::add(int item)
{
    if ((front == 0 && rear == size - 1) || (rear == front - 1))
    {
        std::cout << "\nFULL";
        return;
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
        a[rear] = item;
    }
    else if (rear == size - 1 && front != 0)
    {
        rear = 0;
        a[rear] = item;
    }
    else
    {
        rear++;
        a[rear] = item;
    }
}
int Queue::del()
{
    if (front == -1)
    {
        std::cout << "\n Empty";
        return INT_MIN;
    }

    int item = a[front];
    a[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
        front = 0;
    else
        front++;
    return item;
}
void Queue::show()
{
    if (front == -1)
    {
        std::cout << "\nEmpty";
        return;
    }
    std::cout << "\nElements: ";
    if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
            std::cout << a[i] << "\t";
    }
    else
    {
        for (int i = front; i < size; i++)
            std::cout << a[i] << "\t";
        for (int i = 0; i <= rear; i++)
            std::cout << a[i] << "\t";
    }
}
int main()
{
    Queue q(4);

    q.add(5);
    q.add(7);
    q.add(3);

    q.show();

    int item = q.del();

    q.show();

    q.add(6);
    q.add(4);
    q.show();

    // q.add(9);

    getch();
}