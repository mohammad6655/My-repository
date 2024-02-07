#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <new>
#include "listnode.h"

template <class T>
class List
{
private:
    ListNode<T> *first;
    ListNode<T> *last;
    ListNode<T> *getNewNode(const T &);

public:
    List();
    ~List();
    void insertAtFront(const T &);
    void insertAtBack(const T &);
    bool removeFromFront(T &);
    bool removeFromBack(T &);
    bool isEmpty() const;
    void print() const;
};

template <class T>
List<T>::~List()
{
    if (!isEmpty())
    {
        ListNode<T> *c, *t;
        c = first;
        while (c != 0)
        {
            t = c;
            std::cout << t->data;
            c = c->next;
            delete t;
            std::cout << "\n";
        }
        std::cout << "\n";
    }
    std::cout << "All nodes destroyed";
}
template <class T>
List<T>::List() : first(0), last(0)
{
    // empty body
}
template <class T>
bool List<T>::isEmpty() const
{
    return first == 0;
}

// return pointer to newly allocated node
template <class T>
ListNode<T> *List<T>::getNewNode(const T &item)
{
    return new ListNode<T>(item);
}
template <class T>
void List<T>::insertAtFront(const T &item)
{
    ListNode<T> *n;
    n = getNewNode(item);

    if (isEmpty())
        first = last = n;

    else
    {
        n->next = first;
        first = n;
    }
}
template <class T>
void List<T>::insertAtBack(const T &item)
{
    ListNode<T> *n;

    n = getNewNode(item);
    if (isEmpty())
        first = last = n;
    else
    {
        last->next = n;
        last = n;
    }
}
template <class T>
bool List<T>::removeFromFront(T &item)
{
    if (isEmpty())
        return false;
    else
    {
        ListNode<T> *t;
        t = first;
        if (first == last)
            first = last = 0;
        else
            first = first->next;

        item = t->data;
        delete t;
        return true;
    }
}
template <class T>
bool List<T>::removeFromBack(T &item)
{
    if (isEmpty())
        return false;
    else
    {
        ListNode<T> *t = last;
        if (first == last)
            first = last = 0;
        else
        {
            ListNode<T> *t = first;
            while (t->next != last)
                t = t->next;
            last = t;
            t->next = 0;
        }
        item = t->data;
        delete t;
        return true;
    }
}
template <class T>
void List<T>::print() const
{
    if (isEmpty())
    {
        std::cout << "The list is empty\n\n";
        return;
    }
    ListNode<T> *t;
    t = first;

    std::cout << "list : ";
    while (t != 0)
    {
        std::cout << t->data << "   ";
        t = t->next;
    }
    std::cout << "\n\n";
}

#endif
