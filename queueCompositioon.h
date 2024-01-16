#ifndef QUEUE_C
#define QUEUE_C
#include "list.h"

template<class QT>

class Queue
{
private:
    List<QT> q;

public:
    void enqueue(const QT &data)
    {
        q.insertAtBack(data);
    }
    bool dequeuer(QT &data)
    {
        return q.removeFromFront(data);
    }
    bool isQueueEmpty() const
    {
        return q.isEmpty();
    }
    void printqueue() const
    {
        q.print();
    }
};

#endif