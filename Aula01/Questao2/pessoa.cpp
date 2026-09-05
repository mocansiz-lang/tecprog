#include "Pessoa.h"
#include <iostream>
#include <cstring>
using namespace std;
Pessoa::Pessoa(const char n[])
{
    strcpy(nome, n);
}
void Pessoa::associa (Universidade* pu)
{
    Uni= pu;
}


void Pessoa::Informa()
{
 cout << "Nome " << nome << endl;
 cout << "Universidade ";
  Uni->InformaNome();
  cout << endl;
}

