#include "StackVet.h"

StackVet::StackVet()
{

}

StackVet::StackVet(int qt)
{
    Vet = new Thing[qt];
    N=qt;
    TOP=0;
}

StackVet::~StackVet()
{
    while(N>0)
    {
        delete &Vet[N];
        N--;
    }
}

bool StackVet::isFull()
{
    return TOP==N;
}

bool StackVet::isEmpty()
{
    return !TOP;
}

bool StackVet::push(Thing *dat)
{
    if(this->isFull())
    {
        return false;
    }
    Vet[TOP]=*dat;
    TOP++;
    return true;
}

bool StackVet::pop(Thing *dat)
{
    if(this->isEmpty())
    {
        return 0;
    }
    *dat = Vet[TOP-1];
    TOP--;
    return true;
}

