#include "Interface.h"
#include <header.hpp>
Interface::Interface()
{

}

void Interface::iniciaTorre(StackVet *torre)
{
    torre = (StackVet*) new StackVet[6];
    for(int i=0; i<6; i++)
    {
        torre[i]= 0;
    }
}


