#include <stdio.h>
#include "Universidade.h"
#include "Departamento.h"

class Pessoa
{
    private:
    Universidade *Uni;
    Departamento *Dept;
    char nome[30];
public:
    Pessoa(const char n[] = "");
    void associa(Universidade* pU);
    void associaDepto(Departamento* pD);
    void Informa();
};
