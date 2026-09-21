#pragma once

#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Professor : public Pessoa
{
    private:
        Universidade *Uni;
        Departamento *Dept;
    public:
        Professor(int diaNa, int mesNa, int anoNa, char* nome = "");
        Professor();
        ~Professor();

        void associa(Universidade* pU);
        void associaDepto(Departamento* pD);
    void Informa();
};
