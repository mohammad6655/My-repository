// Circular Doubly Linked List(insert)
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *start, *last;

int counter = 0;

node *create(int item)
{
    struct node *n;
    n = new (struct node);
    n->data = item;
    n->next = n;
    n->prev = n;
    counter++;
    return n;
}
void add_begin(int item)
{
    struct node *n;
    n = create(item);

    if (start == NULL && last == NULL)
    {
        start = last = n;
        n->next = n;
        n->prev = n;
    }
    else
    {
        n->next = start;
        start->prev = n;
        start = n;
        start->prev = last;
        last->next = start;
    }
}
void add_end(int item)
{
    struct node *n;
    n = create(item);
    if (start == NULL && last == NULL)
    {
        start = last = n;
        n->next = n;
        n->prev = n;
    }
    else
    {
        last->next = n;
        n->prev = last;
        last = n;
        start->prev = last;
        last->next = start;
    }
}
void delete_begin()
{
    struct node *t;

    t = start;

    start = start->next;
    t->prev->next = start;
    start->prev = t->prev;

    delete t;
}
void delete_end()
{
    struct node *t;

    t = start;

    while (t->next != start)
        t = t->next;

    t->prev->next = t->next;
    t->next->prev = t->prev;

    delete t;
}
void display()
{
    int i;
    struct node *s;
    if (start == last && start == NULL)
    {
        std::cout << "Empty" << '\n';
        return;
    }
    s = start;
    for (i = 1; i <= counter - 1; i++)
    {
        std::cout << s->data << " <-> ";
        s = s->next;
    }
    std::cout << s->data << '\n';
}
int main()
{
    int choice, x;
    while (1)
    {
        std::cout << "1. Add begin" << '\n';
        std::cout << "2. Add end" << '\n';
        std::cout << "3. Delete first" << '\n';
        std::cout << "4. Delete end" << '\n';
        std::cout << "5. Show" << '\n';
        std::cout << "6. Exit" << '\n';

        std::cout << "\n\nEnter(1..6): ";
        std::cin >> choice;

        switch (choice)
        {

        case 1:
            std::cout << "Enter: ";
            std::cin >> x;
            add_begin(x);
            std::cout << '\n';
            break;
        case 2:
            std::cout << "Enter: ";
            std::cin >> x;
            add_end(x);
            std::cout << '\n';
            break;
        case 3:
            delete_begin();
            std::cout << '\n';
            break;
        case 4:
            delete_end();
            std::cout << '\n';
            break;
        case 5:
            display();
            std::cout << '\n';
            break;
        case 6:
            exit(1);
        }
    }
    getch();
}