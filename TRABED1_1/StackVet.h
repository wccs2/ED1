#ifndef STACKVET_H
#define STACKVET_H
#include <Thing.h>


class StackVet
{
public:
    StackVet(int qt);
    ~StackVet();
    Thing *Vet;
    int N,TOP;
    bool isFull();
    bool isEmpty();
    bool push(Thing *dat);
    bool pop(Thing *dat);
};

#endif // STACKVET_H
