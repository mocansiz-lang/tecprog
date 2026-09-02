#include <stdio.h>
class Pessoa
{
    private:
        int diaP;
        int mesP;
        int anoP;
        int idadeP;
    public:
        Pessoa(int diaNa, int mesNa, int anoNa)
        {
            diaP = diaNa;
            mesP = mesNa;
            anoP = anoNa;
            idadeP = -1;
        }
        void Calc_Idade(int diaAT, int mesAT, int anoAT)
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
}

        void informaIdade()
        {
            printf("%d",idadeP);
        }
};

