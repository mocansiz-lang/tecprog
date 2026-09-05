#include <stdio.h>
#include "Universidade.h"
class Pessoa
{
    private:
    Universidade *Uni;
    char nome[30];
public:
    Pessoa(const char n[] = "");
    void associa(Universidade* pU);
    void Informa();
};
