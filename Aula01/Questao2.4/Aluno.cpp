#include "Aluno.h"

Aluno::Aluno()
{
    pProx = NULL;
    pAnte = NULL;
}

Aluno::~Aluno()
{
    pProx = NULL;
    pAnte = NULL;
}

void Aluno::setRA(int ra)
{
    RA = ra;
}

int Aluno::getRA()
{
    return RA;
}
