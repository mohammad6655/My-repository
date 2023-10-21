// Delete
#include <iostream>
#include <cstdlib>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
} *start;

node *create_node(int v)
{
    struct node *n, *s;
    n = new (struct node);
    if (n == NULL)
    {
        std::cout << "not allocated" << '\n';
        return 0;
    }
    else
    {
        n->data = v;
        n->next = NULL;
        return n;
    }
}
void insert_begin()
{
    struct node *n, *p;
    int v;
    std::cout << "data: ";
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
void del_pos()
{
    struct node *s, *p;
    int pos, i, c = 0;
    if (start = NULL)
        return;

    std::cout << "position: ";
    std::cin >> pos;

    s = start;
    if (pos == 1)
        start = s->next;
    else
    {
        while (s != NULL)
        {
            s = s->next;
            c++;
        }
        if (pos >= 2 && pos <= c)
        {
            s = start;
            for (i = 1; i <= pos - 1; i++)
            {
                p = s;
                s = s->next;
            }
            p->next = s->next;
        }
        else
            std::cout << "out of range" << '\n';
        free(s);
    }
}
void display()
{
    struct node *n;
    if (start == NULL)
    {
        std::cout << "Empty" << '\n';
        return;
    }
    n = start;
    std::cout << "Elements: " << '\n';
    while (n != NULL)
    {
        std::cout << n->data << "->";
        n = n->next;
    }
    std::cout << "NULL" << '\n';
}
int main()
{
    int x;
    start = NULL;

    while (1)
    {
        std::cout << "1 . Insert at beginning    " << '\n';
        std::cout << "2 . Delete                 " << '\n';
        std::cout << "3 . Display                " << '\n';
        std::cout << "4 . Exit                   " << '\n';
        std::cout << "Enter (1 or 2 or 3 or 4) : " << '\n';

        std::cin >> x;
        switch (x)
        {
        case 1:
            insert_begin();
            std::cout << '\n';
            break;
        case 2:
            del_pos();
            break;
        case 3:
            display();
            std::cout << '\n';
            break;
        case 4:
            exit(1);
            break;
        }
    }
    getch();
}