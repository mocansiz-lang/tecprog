#include "Universidade.h"
#include "Departamento.h"
#include <iostream>
#include <cstring>

using namespace std;

Universidade::Universidade(const char* nome)
{
    strcpy(Uni, nome);
    numDeptos = 0;
}

Universidade::~Universidade()
{
}

void Universidade::associaDepto(Departamento* pD)
{
    if (numDeptos < 50)
    {
        Deptos[numDeptos] = pD;
        numDeptos++;
        pD->associaUni(this);
    }
    else
    {
        cout << "Universidade " << Uni << " ja atingiu o limite de departamentos!" << endl;
    }
}

void Universidade::InformaNome()
{
    cout << Uni;
}

void Universidade::ListaDeptos()
{
    cout << "Departamentos de " << Uni << ":" << endl;
    for (int i = 0; i < numDeptos; i++)
    {
        cout << "  - ";
        Deptos[i]->InformaNome();
        cout << endl;
    }
}
