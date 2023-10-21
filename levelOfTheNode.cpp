// Level of the node
#include <iostream>
#include <conio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int item)
{
    struct node *t;
    t = new struct node;
    t->data = item;
    t->left = NULL;
    t->right = NULL;

    return t;
}
int levelNode(struct node *n, int item, int level)
{
    if (n == NULL)
        return 0;
    if (n->data == item)
        return level;

    int d = levelNode(n->left, item, level + 1);

    if (d != 0)
        return d;

    d = levelNode(n->right, item, level + 1);

    return d;
}
int getLevel(struct node *p, int item)
{
    return levelNode(p, item, 1);
}
int main()
{
    struct node *r;
    r = new struct node;

    r = create(5);
    r->left = create(7);
    r->right = create(9);
    r->left->left = create(8);
    r->left->right = create(6);

    std::cout << getLevel(r, 7);

    getch();
}