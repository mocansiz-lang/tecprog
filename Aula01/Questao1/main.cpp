#include "Pessoa.h"
int main()
{
    Pessoa Einstein ( 14, 3, 1879 );
    Pessoa Newton ( 4, 1, 1643 );
    Einstein.Calc_Idade ( 24, 8, 2009 );
    Newton.Calc_Idade ( 24, 8, 2009 );
    printf ( "Einstein teria ");
     Einstein.informaIdade();
     printf("\n");
    printf ( "Newton teria ");
    Newton.informaIdade();
    getchar();
    return 0;
}
