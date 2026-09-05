#include "Universidade.h"
#include <iostream>
#include <cstring>

using namespace std;

Universidade::Universidade(char nome[])
{
    strcpy(Uni, nome);
}
Universidade::~Universidade ( )
{
}
void Universidade::InformaNome()
{
    cout << Uni;
}
