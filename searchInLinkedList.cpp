// search in linked list
#include <iostream>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};
void add_begin(struct node **s, int item)
{
    struct node *n;

    n = new (struct node);

    n->data = item;

    n->next = (*s);

    (*s) = n;
}
bool search(struct node *head, int x)
{
    struct node *t;

    t = head;
    while (t != NULL)
    {
        if (t->data == x)
            return true;
        t = t->next;
    }
    return false;
}
bool search_rec(struct node *h, int x)
{
    if (h == NULL)
        return false;
    if (h->data == x)
        return true;
    return search_rec(h->next, x);
}
int main()
{
    struct node *h = NULL;

    add_begin(&h, 5);
    add_begin(&h, 8);
    add_begin(&h, 2);
    add_begin(&h, 6);

    search(h, 2) ? std::cout << "found" : std::cout << "not found";

    std::cout << '\n';
    search_rec(h, 2) ? std::cout << "found" : std::cout << "not found";
    getch();
}