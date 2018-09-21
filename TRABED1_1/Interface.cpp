#include "Interface.h"
#include <header.hpp>
Interface::Interface()
{

}

void Interface::iniciaTorre(Stack *torre)
{
    torre = (Stack *) new Stack[6];
}

void Interface::iniciaplayers(Queue *players)
{
    players = (Queue *) new Queue[4];
}


