#include "QueueVet.h"

QueueVet::QueueVet(int qt)
{
    Vet = new Thing[qt+1];
    N = qt+1;
    head=tail=0;
}
/*QueueVet::QueueVet()
{

}*/
bool QueueVet::Push(Thing *dat)
{
    if(this->isFull())
    {
        return false;
    }
    Vet[tail]= *dat;
    tail=(tail+1)%N;
    return true;
}

bool QueueVet::Pop(Thing *dat)
{
    if(this->isEmpty())
    {
        return false;
    }
    *dat=Vet[head];
    head=(head+1)%N;
    return true;
}

bool QueueVet::isEmpty()
{
    return (tail==head);
}

bool QueueVet::isFull()
{
    return ((tail+1)%N==head%N);
}

void QueueVet::delQueue()
{
    tail=head=0;
}
