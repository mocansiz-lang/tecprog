#pragma once
#include <stdio.h>
#include "Universidade.h"
class Universidade;

class Departamento
{
    private:
        char Depart[30];
        Universidade *Uni;
    public:
        Departamento(const char n[] = "");
        void associaUni(Universidade* pU);
        void InformaNome();
};
