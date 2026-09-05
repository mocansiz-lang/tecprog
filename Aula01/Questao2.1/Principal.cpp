#include "Principal.h"
#include <iostream>
Principal::Principal()
    : Simao("Simao"), Einstein("Einstein"), Newton("Newton"),
      UTFPR("UTFPR"), Princeton("Princeton"), Cambridge("Cambridge"),
      Matematica("Matematica"), Fisica("Fisica"), Dainf("Dainf")

{
}
void Principal::Executar()
{
    Simao.associa(&UTFPR);
    Einstein.associa(&Princeton);
    Newton.associa(&Cambridge);
    Newton.associaDepto(&Matematica);
    Einstein.associaDepto(&Fisica);
    Simao.associaDepto(&Dainf);
    Simao.Informa();
    Einstein.Informa();
    Newton.Informa();
}
