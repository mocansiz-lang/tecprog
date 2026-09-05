#include <stdio.h>
#pragma once

class Universidade
{
    private:
        char Uni[30];
    public:
        Universidade ( char* n = "" );
        ~Universidade ( );
        void InformaNome();
};
