#pragma once

#include "Horario.h"

class Principal
{
private:
    Horario entrada;
    Horario saida;


public:
    Principal();
    ~Principal();

    void Executar();
    void PerguntaHorario();
    float CalculaCusto();
};
