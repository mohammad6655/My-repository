// traverse(inorder , preorder, postorder)
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
    struct node *n;
    n = new (struct node);

    n->data = item;
    n->left = NULL;
    n->right = NULL;

    return (n);
}
void preorder(struct node *p)
{
    if (p != NULL)
    {
        std::cout << p->data << "   ";
        preorder(p->left);
        preorder(p->right);
    }
}
void inorder(struct node *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        std::cout << p->data << "   ";
        inorder(p->right);
    }
}
void postorder(struct node *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        std::cout << p->data << "   ";
    }
}
int main()
{
    struct node *r;

    r = create(1);

    r->left = create(2);
    r->right = create(3);

    r->left->left = create(4);
    r->left->right = create(5);

    r->left->right->left = create(6);

    std::cout << "preorder    : ";
    preorder(r);

    std::cout << '\n'
              << '\n';

    std::cout << "inorder     : ";
    inorder(r);

    std::cout << '\n'
              << '\n';

    std::cout << "postorder   : ";
    postorder(r);

    getch();
}