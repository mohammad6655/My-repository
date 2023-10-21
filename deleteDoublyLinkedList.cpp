// delete : Doubly Linked List
#include <iostream>
#include <cstdlib>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *start;

void create(int item)
{
    struct node *s, *t;
    t = new (struct node);
    t->data = item;
    t->next = NULL;
    if (start == NULL)
    {
        t->prev = NULL;
        start = t;
    }
    else
    {
        s = start;
        while (s->next != NULL)
            s = s->next;
        s->next = t;
        t->prev = s;
    }
}
void deleteNode(int item)
{
    struct node *t, *q;
    if (start->data == item)
    {
        t = start;
        start = start->next;
        start->prev = NULL;
        free(t);
        return;
    }
    q = start;
    while (q->next->next != NULL)
    {
        if (q->next->data == item)
        {
            t = q->next;
            q->next = t->next;
            t->next->prev = q;
            free(t);
            return;
        }
        q = q->next;
    }
    if (q->next->data == item)
    {
        t = q->next;
        free(t);
        q->next = NULL;
        return;
    }
    std::cout << "Not found" << '\n';
}
void show()
{
    struct node *q;
    if (start == NULL)
    {
        std::cout << "Empty" << '\n';
        return;
    }
    q = start;
    while (q != NULL)
    {
        std::cout << q->data << " <-> ";
        q = q->next;
    }
    std::cout << "NULL" << '\n';
}
int main()
{
    // create(5);
    // create(3);
    // create(8);
    // create(12);

    // show();

    // deleteNode(5);

    // show();
    int choice, x, pos;

    while (1)
    {
        std::cout << "1. Create" << '\n';
        std::cout << "2. Delete" << '\n';
        std::cout << "3. Show" << '\n';
        std::cout << "1. Exit" << '\n';

        std::cout << "\n\nEnter(1..4): ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Enter: ";
            std::cin >> x;
            std::cout << '\n';
            create(x);
            break;

        case 2:
            std::cout << "Enter: ";
            std::cin >> x;
            std::cout << '\n';
            deleteNode(x);
            break;
        case 3:
            show();
            std::cout << '\n';
            break;
        case 4:
            exit(1);
        }
    }

    getch();
}