#pragma once
#include "Entidade.h"
class Personagem :
    public Entidade
{
    public:
        virtual void mover() = 0;
};

