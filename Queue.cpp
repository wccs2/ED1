#include "Queue.h"

Queue::Queue()
{
    head=tail=NULL;
}

bool Queue::Push(Thing *dado)
{
    Node *p;
    p=Node::montaNo(dado);
    if(p)
    {
        p->next = NULL;
        if(!head)
        {
            head=p;
        }
        else
        {
            tail->next=p;
        }
        tail=p;
        return true;
    }
    return false;
}

bool Queue::Pop(Thing *dado)
{
    if(!head)
    {
        return false;
    }
    Node *p = head;
    head = head->next;
    if(!head)
    {
        tail=NULL;
    }
    Node::desmontaNo(p, dado);
    return true;

}

bool Queue::isEmpty()
{
    return !head;
}

