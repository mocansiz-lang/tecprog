#include "Principal.h"
#include <iostream>
#include <string.h>
Principal:: Principal ()
{
    Simao.Inicializa (3, 10, 1976, "Jean Simão");
    Einstein.Inicializa (14, 3, 1879, "Albert Einstein");
    Newton.Inicializa (4, 1, 1643, "Isaac Newton");
}
void Principal::Executar()
{
    Simao.Calc_Idade (25, 8, 2009);
    Einstein.Calc_Idade (25, 8, 2009);
    Newton.Calc_Idade (25, 8, 2009);
}
