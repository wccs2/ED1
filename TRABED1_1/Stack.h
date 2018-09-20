#ifndef STACK_H
#define STACK_H
#include <Thing.h>
#include <Node.h>
#include <iostream>
class stack
{
public:
    stack();
    Node *TOP;
    bool isEmpty();
    bool push(Thing *obj);
    bool pop(Thing *obj);

};

#endif // STACK_H
