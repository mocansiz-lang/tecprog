#pragma once
#include <stdio.h>
#include "Universidade.h"
#include "Departamento.h"

class Pessoa
{
    private:
    Universidade *Uni;
    Departamento *Dept;
    char nomeP[30];
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
public:
    Pessoa ( int diaNa, int mesNa, int anoNa, char* nome = "" );
    Pessoa ();
    void Inicializa ( int diaNa, int mesNa, int anoNa, char* nome = "" );
    void Calc_Idade ( int diaAT, int mesAT, int anoAT );
    int informaIdade ();
    void associa(Universidade* pU);
    void associaDepto(Departamento* pD);
    void Informa();
};
