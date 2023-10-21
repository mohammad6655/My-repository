#include <iostream>
#include <stdio.h>
#include <conio.h>

struct stack
{
    int a[10];
    int top;
};
void create(struct stack *s)
{
    s->top = -1;
}
int isFull(struct stack *s)
{
    if (s->top == 9)
        return 1;
    else
        return 0;
}
int isEmpty(struct stack *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}
void push(struct stack *s)
{
    int x;
    std::cout << "Enter: ";
    std::cin >> x;
    if (isFull(s))
        std::cout << "Full";
    else
    {
        s->top++;
        s->a[s->top] = x;
    }
}
void pop(struct stack *s)
{
    if (isEmpty(s))
        std::cout << "Empty";
    else
    {
        std::cout << "pop= " << s->a[s->top];
        s->top--;
    }
}
int main()
{
    struct stack *x;

    int a = 1;

    create(x);
    push(x);
    push(x);
    push(x);

    pop(x);

    getch();
}
