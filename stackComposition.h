#ifndef STACKCOMPOSITION
#define STACKCOMPOSITION
#include "list.h"

template <class ST>

class Stack
{
private:
    List<ST> s;

public:
    void push(const ST &data)
    {
        s.insertAtFront(data);
    }
    bool pop(ST &data)
    {
        return s.removeFromFront(data);
    }
    bool isStackEmpty() const
    {
        return s.isEmpty();
    }
    void printStack() const
    {
        s.print();
    }
};


#endif