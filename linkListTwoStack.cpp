#include <conio.h>
#include <bits/stdc++.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    if (head == NULL)
    {
        std::cout << "NULL\n";
    }
    else
    {
        std::cout << head->data << "->";
        display(head->next);
    }
}
void concat(struct node *a, struct node *b)
{
    if (a != NULL && b != NULL)
    {
        if (a->next == NULL)
            a->next = b;
        else
            concat(a->next, b);
    }
    else
    {
        std::cout << "Either a or b is NULL\n";
    }
}
int main()
{
    struct node *prev, *a, *b, *p;
    int n, i;

    std::cout << "num a: ";
    std::cin >> n;

    a = NULL;
    for (i = 0; i < n; i++)
    {
        p = new node;
        std::cin >> p->data;

        p->next = NULL;
        if (a == NULL)
            a = p;
        else
            prev->next = p;
        prev = p;
    }
    std::cout << "num b: ";
    std::cin >> n;
    b = NULL;

    for (i = 0; i < n; i++)
    {
        p = new node;
        std::cin >> p->data;
        p->next = NULL;
        if (b == NULL)
            b = p;
        else
            prev->next = p;
        prev = p;
    }
    concat(a, b);
    
    std::cout << "\n\nconcat: ";

    display(a);

    getch();
}