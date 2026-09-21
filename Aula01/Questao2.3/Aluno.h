#pragma once

#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Aluno : public Pessoa
{
    private:
        int Ra;
    public:
        Aluno(int diaNa, int mesNa, int anoNa, char* nome = "");
        Aluno();
        ~Aluno();

       void setRA ( int ra );
        int getRA ( );
};

