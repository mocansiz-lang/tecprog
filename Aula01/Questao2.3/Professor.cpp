#include "Professor.h"
#include <iostream>

using namespace std;

Professor::Professor(int diaNa, int mesNa, int anoNa, char* nome)
    : Pessoa(diaNa, mesNa, anoNa, nome)
{
    Uni = NULL;
    Dept = NULL;
}

Professor::Professor()
    : Pessoa()
{
    Uni = NULL;
    Dept = NULL;
}

Professor::~Professor()
{
}

void Professor::associa(Universidade* pU)
{
    Uni = pU;
}

void Professor::associaDepto(Departamento* pD)
{
    Dept = pD;
}

void Professor::Informa()
{
    Pessoa::Informa();

    cout << "Universidade: ";
    Uni->InformaNome();
    cout << endl;

    cout << "Departamento: ";
    Dept->InformaNome();
    cout << endl;
}
