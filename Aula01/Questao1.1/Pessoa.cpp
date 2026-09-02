#include "Pessoa.h"
#include <iostream>
#include <string.h>
using namespace std;
Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, char* nome)
{
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = -1;
    strcpy(nomeP, nome);
    Calc_Idade (25,8,2009);
}
void  Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT)
{
    idadeP = anoAT - anoP;
    if (mesP < mesAT)
    {
        idadeP = idadeP - 1;
    }
    else
    {
        if (mesP == mesAT)
        {
            if (diaP > diaAT)
            {
                idadeP = idadeP - 1;
            }
        }
    }
    cout << "A idade da Pessoa " << nomeP << " seria "<< idadeP << endl;
}
