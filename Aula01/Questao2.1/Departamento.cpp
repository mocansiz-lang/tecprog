#include "Departamento.h"
#include <iostream>
#include <cstring>
using namespace std;
Departamento::Departamento(const char n[])
{
    strcpy(Depart, n);
}

void Departamento::InformaNome()
{
    cout << Depart;
}
