// Doubly Linked List
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *start;

void create(int value)
{
    struct node *s, *t;

    t = new (struct node);
    t->data = value;
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
void add_first(int value)
{
    if (start == NULL)
    {
        std::cout << "First Create the list." << '\n';
        return;
    }
    struct node *t;
    t = new (struct node);

    t->data = value;
    t->prev = NULL;
    t->next = start;

    start->prev = t;
    start = t;
}
void add_pos(int value, int pos)
{
    struct node *t, *p;

    if (start == NULL)
        return;

    p = start;
    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
        if (p == NULL)
        {
            std::cout << "Error" << '\n';
            return;
        }
    }
    t = new (struct node);
    t->data = value;
    if (p->next == NULL)
    {
        p->next = t;
        t->next = NULL;
        t->prev = p;
    }
    else
    {
        t->next = p->next;
        t->next->prev = t;
        p->next = t;
        t->prev = p;
    }
}
void show()
{
    struct node *t;
    if (start == NULL)
    {
        std::cout << "Empty" << '\n';
        return;
    }
    t = start;
    while (t != NULL)
    {
        std::cout << t->data << " <-> ";
        t = t->next;
    }
    std::cout << "NULL" << '\n';
}
int main()
{
    int choice, x, pos;

    while (1)
    {
        std::cout << "1. Create" << '\n';
        std::cout << "2. Insert at begining" << '\n';
        std::cout << "3. Insert after postition" << '\n';
        std::cout << "4.Display" << '\n';
        std::cout << "5. Exit" << '\n';
        std::cout << "\n\nEnter(1..5): ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Enter: ";
            std::cin >> x;
            create(x);
            std::cout << '\n';
            break;
        case 2:
            std::cout << "Enter: ";
            std::cin >> x;
            add_first(x);
            std::cout << '\n';
            break;
        case 3:
            std::cout << "Enter: ";
            std::cin >> x;
            std::cout << "Insert Element after postion: ";
            std::cin >> pos;
            add_pos(x, pos);
            std::cout << '\n';
            break;
        case 4:
            show();
            std::cout << '\n';
            break;
        case 5:
            exit(1);
        }
    }
    getch();
}