#include "Principal.h"
#include <iostream>
Principal::Principal()
    : Simao("Simao"), Einstein("Einstein"), Newton("Newton"),
      UTFPR("UTFPR"), Princeton("Princeton"), Cambridge("Cambridge")
{
}
void Principal::Executar()
{
    Simao.associa(&UTFPR);
    Einstein.associa(&Princeton);
    Newton.associa(&Cambridge);
    Simao.Informa();
    Einstein.Informa();
    Newton.Informa();
}
