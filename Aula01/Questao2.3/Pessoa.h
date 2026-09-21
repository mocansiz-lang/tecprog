#pragma once
#include <stdio.h>

class Pessoa
{
protected:
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

    void Informa();
};
