#include <stdio.h>
#pragma once
class Departamento;

class Universidade
{
    private:
        char Uni[30];
        Departamento *Deptos[50];
        int numDeptos;

        public:
        Universidade(const char* n = "");
        ~Universidade();
        void associaDepto(Departamento* pD);
        void InformaNome();
        void ListaDeptos();

};
