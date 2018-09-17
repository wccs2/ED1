#ifndef QUEUE_H
#define QUEUE_H
#include <Node.h>
#include <Thing.h>

class Queue
{
public:
    Node *head, *tail;
    Queue();
    bool Push(Thing *dado);
    bool Pop(Thing *dado);
    bool isEmpty();

};

#endif // QUEUE_H
