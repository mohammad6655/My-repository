// insert in double link list
#include <iostream>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void addFirst(struct node **s, int item)
{
    struct node *n;

    n = (struct node *)malloc(sizeof(struct node));

    n->data = item;

    n->next = *s;
    n->prev = NULL;

    if (*s != NULL)
        (*s)->prev = n;
    *s = n;
}
void addAfter(struct node *p, int item)
{
    if (p == NULL)
        return;

    struct node *n;

    n = (struct node *)malloc(sizeof(struct node));

    n->data = item;

    n->next = p->next;
    n->prev = p;

    p->next = n;

    if (n->next != NULL)
        n->next->prev = n;
}
void show(struct node *k)
{
    while (k != NULL)
    {
        std::cout << k->data << " -> ";
        k = k->next;
    }
    std::cout << "NULL";
}
int main()
{
    struct node *h;

    h = NULL;

    addFirst(&h, 3);                    //  3

    addFirst(&h, 2);                    //  2 -> 3
    
    addFirst(&h, 1);                    //  1 -> 2 -> 3

    addAfter(h->next->next, 4);         //  1 -> 2 -> 3 -> 4

    show(h);

    getch();
}