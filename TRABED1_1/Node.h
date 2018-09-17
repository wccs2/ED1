#ifndef NODE_H
#define NODE_H
#include <thing.h>

class Node
{

public:
    Node();
    Thing dado;
    Node *next;
    static Node *montaNo(Thing *dado);
    static void desmontaNo(Node *P, Thing *dado);
};

#endif // NODE_H
