// Recursive-Reverse
#include <iostream>
#include <cstdlib>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};
void reverse(struct node **head)
{
    struct node *first, *p;
    if (*head == NULL)
        return;

    first = *head;

    p = first->next;

    if (p == NULL)
        return;

    reverse(&p);

    first->next->next = first;

    first->next = NULL;

    *head = p;
}
void add(struct node **head, int v)
{
    struct node *n;

    n = (struct node *)malloc(sizeof(struct node));

    n->data = v;

    n->next = (*head);

    (*head) = n;
}
void show(struct node *h)
{
    struct node *t;

    t = h;
    while (t != NULL)
    {
        std::cout << t->data << "->";
        t = t->next;
    }
    std::cout << "NULL";
}
int main()
{
    struct node *h = NULL;

    add(&h, 5);
    add(&h, 9);
    add(&h, 2);
    add(&h, 7);
    add(&h, 1);

    show(h);

    reverse(&h);

    std::cout << "\n\n";

    show(h);

    getchar();
}