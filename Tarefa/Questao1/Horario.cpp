#include "Horario.h"

Horario::Horario() : hora{0}, minuto{0}
{

}

Horario::~Horario()
{

}

bool Horario::SetHora(int horas)
{
    if (horas>=0 && horas<24)
    {
        hora=horas;
        return true;
    }
    return false;
}


bool Horario::SetMin(int minutos)
{
    if (minutos>=0 && minutos<60)
    {
        minuto=minutos;
        return true;
    }
    return false;
}

int Horario::GetHora()
{
    return hora;
}

int Horario::GetMin()
{
    return minuto;
}

int Horario::CalculaIntervalo(Horario horarioSaida)
{
    int horaa=60*hora+minuto;

    int horasa = 60 * horarioSaida.GetHora()+ horarioSaida.GetMin();
    return horasa-horaa;

}
