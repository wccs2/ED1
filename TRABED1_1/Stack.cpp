#include "Stack.h"
bool Stack::push(Thing *obj)
{
    Node *P;
    P=Node::montaNo(obj);
    if(P)
    {
       P->next=TOP;
       TOP=P;
       return true;
    }
    return false;
}

bool Stack::pop(Thing *obj)
{
    if(!TOP)
    {
        return false;
    }
    Node*P;
    P=TOP;
    TOP=P->next;
    Node::desmontaNo(P, obj);
    return true;
}

bool Stack::isEmpty()
{
    return !TOP;
}

Stack::stack()
{

}
