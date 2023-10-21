// Find Predecossor and Successor in BST
#include <iostream>
#include <conio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
node *create(int item)
{
    node *t = new node;
    t->data = item;
    t->left = t->right = NULL;
    return t;
}
int main()
{
    /*
                5
              /    \
             3      7
            /  \   /  \
           2    4  6   8
           */
    node *r, *p, *s;

    r = NULL;
    r = add(r, 5);
    add(r, 3);
    add(r, 2);
    add(r, 4);
    add(r, 7);
    add(r, 6);
    add(r, 8);

    p = NULL;
    s = NULL;
    PreSuc(r, p, s, 5);

    if (p != NULL)
        std::cout << p->data << '\n';
    else
        std::cout << "No Predecesoor";

    if (s != NULL)
        std::cout << s->data;
    else
        std::cout << "No Successor";

    getch();
}