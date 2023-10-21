// Circular Linked List
#include <iostream>
#include <cstdlib>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};

void addBegin(struct node **s, int item)
{
    struct node *n, *t;

    n = new (struct node); //  n=(struct node *)malloc(sizeof(struct node));
    n->data = item;
    n->next = *s;

    t = *s;
    if (*s != NULL)
    {
        while (t->next != *s)
            t = t->next;
        t->next = n;
    }
    else
        n->next = n;
    *s = n;
}
void show(struct node *h)
{
    struct node *t;

    t = h;
    if (h != NULL)
    {
        do
        {
            std::cout << t->data << "    ";
            t = t->next;
        } while (t != h);
    }
}
int main()
{
    struct node *h;

    h = NULL;

    addBegin(&h, 3);
    addBegin(&h, 2);
    addBegin(&h, 1);

    show(h);
    show(h->next);

    // int choice, *x;
    // while (1)
    // {

        

    //     std::cout << "1. create" << '\n';
    //     std::cout << "2. show" << '\n';
    //     std::cout << "3. Exit" << '\n';

    //     std::cout << "\n\nEnter(1..3): ";
    //     std::cin >> choice;

    //     switch (choice)
    //     {
    //     case 1:
    //         std::cout << "Enter: ";
    //         std::cin >> *x;
    //         addBegin(*x);
    //         std::cout << '\n';
    //         break;
    //     case 2:
    //         show(h);
    //         std::cout << '\n';
    //         break;
    //     case 3:
    //         exit(1);
    //     }
    // }

    getch();
}