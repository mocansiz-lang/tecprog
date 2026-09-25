#include "Departamento.h"
#include "Disciplina.h"
#include "Universidade.h"
#include <iostream>
#include <cstring>
using namespace std;
Departamento::Departamento(const char n[])
{
    strcpy(Depart, n);
}
void Departamento::incluaDisciplina(Disciplina* pd)
{
    if (pDisciplPrim == NULL)
    {
        pDisciplPrim = pd;
        pDisciplAtual = pd;
    }
    else
    {
        pDisciplAtual->pProx = pd;
        pDisciplAtual = pd;
    }
}
void Departamento::associaUni(Universidade* pU)
{
    Uni = pU;
}

void Departamento::InformaNome()
{
    cout << Depart;
}
