#include "Departamento.h"
#include "Universidade.h"
#include <iostream>
#include <cstring>
using namespace std;
Departamento::Departamento(const char n[])
{
    strcpy(Depart, n);
}
void Departamento::associaUni(Universidade* pU)
{
    Uni = pU;
}

void Departamento::InformaNome()
{
    cout << Depart;
}
