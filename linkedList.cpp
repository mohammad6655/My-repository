// Linked List
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
} *start;

node *create_node(int val)
{
    struct node *n, *s;

    n = new (struct node);
    if (n == NULL)
    {
        std::cout << "not allocated " << '\n';
        return 0;
    }
    else
    {
        n->data = val;
        n->next = NULL;
        return n;
    }
}
void insert_begin()
{
    struct node *n, *p;
    int v;
    std::cout << "value : ";
    std::cin >> v;

    n = create_node(v);
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
void insert_last()
{
    struct node *n, *s;
    int v;
    std::cout << "value : ";
    std::cin >> v;

    n = create_node(v);
    s = start;
    while (s->next != NULL)
    {
        s = s->next;
    }
    n->next = NULL;
    s->next = n;
}
void insert_pos()
{
    struct node *n, *s, *p;
    int v, pos, c = 0;
    std::cout << "data : ";
    std::cin >> v;

    n = create_node(v);
    std::cout << "postion: ";
    std::cin >> pos;

    int i;
    s = start;

    while (s != NULL)
    {
        s = s->next;
        c++;
    }
    if (pos == 1)
    {
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
    else if (pos > 1 & pos <= c)
    {
        s = start;
        for (i = 1; i < pos; i++)
        {
            p = s;
            s = s->next;
        }
        p->next = n;
        n->next = s;
    }

    else
    {
        std::cout << "Postion out of range" << '\n';
    }
}
void display()
{
    struct node *t;
    if (start == NULL)
    {
        std::cout << "The List is Empty" << '\n';
        return;
    }
    t = start;
    std::cout << "Elements: " << '\n';
    while (t != NULL)
    {
        std::cout << t->data << " , ";
        t = t->next;
    }
}
int main()
{
    int x;
    start = NULL;

    while (1)
    {
        std::cout << "1. insert in begin" << '\n';
        std::cout << "2. insert in end" << '\n';
        std::cout << "3. insert in position" << '\n';
        std::cout << "4. show list  " << '\n';
        std::cout << "5. exit" << '\n';
        std::cout << "enter(1...5):   " << '\n';

        std::cin >> x;

        switch (x)
        {
        case 1:
            insert_begin();
            std::cout << '\n';
            break;
        case 2:
            insert_last();
            std::cout << '\n';
            break;
        case 3:
            insert_pos();
            std::cout << '\n';
            break;
        case 4:
            display();
            std::cout << '\n';
            break;
        case 5:
            exit(1);
            break;
        }
    }
    getch();
}