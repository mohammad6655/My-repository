// find Largest elements in singly Linked List.
#include <iostream>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};
int max(struct node *h)
{
    int max = INT_MIN;

    while (h != NULL)
    {
        if (h->data > max)
            max = h->data;
        h = h->next;
    }
    return max;
}
void add(struct node **h, int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));

    n->data = data;

    n->next = (*h);

    (*h) = n;
}
void show(struct node *h)
{
    while (h != NULL)
    {
        std::cout << h->data << "->";
        h = h->next;
    }
    std::cout << "NULL" << '\n';
}
int main()
{
    struct node *h;
    h = NULL;

    add(&h, 5);
    add(&h, 26);
    add(&h, 7);

    show(h);

    std::cout << "\n\nmax=" << max(h);

    getch();
}