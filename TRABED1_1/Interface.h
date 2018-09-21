#ifndef INTERFACE_H
#define INTERFACE_H
#include <header.hpp>

class Interface
{
public:
    Interface();
    void iniciaTorre(Stack *torre);
    void iniciaplayers(Queue *players);
    void imprimiTorre(Stack *torre, Thing *dat);
};

#endif // INTERFACE_H
