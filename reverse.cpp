// reverse
#include <iostream>
#include <cstdlib>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
} *start;

node *create(int item)
{
    struct node *n;
    n = new (struct node);
    if (n == NULL)
        return 0;
    else
    {
        n->data = item;
        n->next = NULL;
        return n;
    }
}
void add(int v)
{
    struct node *n, *p;
    n = create(v);

    if (start == NULL)
    {
        start = n;
        start->next = NULL;
    }
    else
    {
        p = start;
        start = n;
        start->next = p;
    }
}
int reverse(void)
{
    struct node *p1, *p2, *p3;

    if (start == NULL)
        return 0;
    if (start->next == NULL)
        return 0;

    p1 = start;
    p2 = p1->next;
    p3 = p2->next;

    p1->next = NULL;
    p2->next = p1;

    while (p3 != NULL)
    {
        p1 = p2;
        p2 = p3;
        p3 = p3->next;
        p2->next = p1;
    }
    start = p2;
    return 0;
}
void display()
{
    struct node *n;
    if (start == NULL)
    {
        std::cout << "The List is Empty" << '\n';
        return;
    }
    n = start;
    while (n != NULL)
    {
        std::cout << n->data << "->";
        n = n->next;
    }
    std::cout << "NULL" << '\n'
              << '\n';
}
int main()
{
    add(1);
    add(2);
    add(3);

    display();

    reverse();

    display();

    getch();
}