#include <iostream>

struct node
{
    int data;
    struct node *next;
};

void push(int value)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = value;
    if (top == NULL)
        n->next = NULL;
    else
        n->next = top;
    top = n;
}
void pop()
{
    if (top == NULL)
        std::cout << "Empty";
    else
    {
        struct node *temp = top;
        top = temp->next;
        free(temp);
    }
}