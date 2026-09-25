#pragma once
#include "Pessoa.h"

class Aluno : public Pessoa
{
    private:
        int RA;

    public:
        Aluno *pProx;
        Aluno *pAnte;

        Aluno();
        ~Aluno();

        void setRA(int ra);
        int getRA();
};
