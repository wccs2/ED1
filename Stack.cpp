#include "stack.h"
bool stack::push(Thing *obj)
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

bool stack::pop(Thing *obj)
{
    if(!TOP)
    {
        return false;
    }
    Node*P;
    P=TOP;
    TOP=P->next;
    Node::desmontaNo(P,obj);
    return true;
}

stack::stack()
{

}
