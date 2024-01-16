#ifndef LISTNODE_H
#define LISTNODE_H

template <class T>
class List;
template <class T>

class ListNode
{
    friend class List<T>;

private:
    T data;
    ListNode<T> *next;

public:
    ListNode(const T &); // constructor
    T getData() const;
};
template <class T>
ListNode<T>::ListNode(const T &info) : data(info), next(0)
{
    // empty body
}

template <class T>
T ListNode<T>::getData() const
{
    return data;
}

#endif