#include <stdio.h>
#include "Departamento.h"
#pragma once

class Universidade
{
    private:
        char Uni[30];
        Departamento *Dept;
    public:
        Universidade(const char* n = "");
        ~Universidade();
        void associaDepto(Departamento* pD);
        void InformaNome();
};
