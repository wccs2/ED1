#ifndef QUEUEVET_H
#define QUEUEVET_H
#include<Thing.h>

class QueueVet
{
public:
    Thing *Vet;
    int N, head, tail;
    //QueueVet();
    QueueVet(int qt);
    bool Push(Thing *dat);
    bool Pop(Thing *dat);
    bool isEmpty();
    bool isFull();
    void delQueue();
};

#endif // QUEUEVET_H
