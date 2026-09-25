#pragma once
#include <stdio.h>
#include "Universidade.h"
class Universidade;
class Disciplina;

class Departamento
{
    private:
        char Depart[30];
        Universidade *Uni;
        Disciplina *pDisciplPrim;
        Disciplina *pDisciplAtual;
    public:
        Departamento(const char n[] = "");
        void incluaDisciplina ( Disciplina* pd );
        void associaUni(Universidade* pU);
        void InformaNome();
};
