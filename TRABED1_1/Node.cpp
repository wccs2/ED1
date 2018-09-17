#include "node.h"
#include <iostream>

Node* Node::montaNo(Thing *dado)
{
     Node *P = new Node;
     if(P)
     {
         P->dado = *dado;
         P->next = NULL;
     }
     return P;
}

void Node::desmontaNo(Node *P, Thing *dado)
{
   *dado = P->dado;
    delete P;
}


Node::Node()
{

}
