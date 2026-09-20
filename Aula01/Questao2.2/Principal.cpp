#include "Principal.h"
#include <iostream>
using namespace std;

Principal::Principal()
    : UTFPR("UTFPR"), Princeton("Princeton"), Cambridge("Cambridge"),
      Dainf("Dainf"), Matematica("Matematica"), Fisica("Fisica")
{
    Simao.Inicializa(3, 10, 1976, "Jean Simao");
    Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
    Newton.Inicializa(4, 1, 1643, "Isaac Newton");

    UTFPR.associaDepto(&Dainf);
    Cambridge.associaDepto(&Matematica);
    Princeton.associaDepto(&Fisica);

    Simao.associa(&UTFPR);
    Simao.associaDepto(&Dainf);

    Einstein.associa(&Princeton);
    Einstein.associaDepto(&Fisica);

    Newton.associa(&Cambridge);
    Newton.associaDepto(&Matematica);
}

void Principal::Executar()
{
    Simao.Calc_Idade(31, 8, 2026);
    Einstein.Calc_Idade(31, 8, 2026);
    Newton.Calc_Idade(31, 8, 2026);

    Simao.Informa();
    Einstein.Informa();
    Newton.Informa();
}
