#include "Universidade.h"
#include <iostream>
#include <cstring>

using namespace std;
Universidade::Universidade(const char* nome)
{
    strcpy(Uni, nome);
}

Universidade::~Universidade()
{
}

void Universidade::associaDepto(Departamento* pD)
{
    Dept = pD;
}

void Universidade::InformaNome()
{
    cout << Uni;
}
