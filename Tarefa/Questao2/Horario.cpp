#include "Horario.h"
Horario::Horario(int h, int m)
{
    if (h >= 0 && h < 24 && m >= 0 && m < 60) {
        hora = h;
        minuto = m;
        Valido = true;
    }
    else
    {
        hora = 0;
        minuto = 0;
        Valido = false;
    }
}
bool Horario::GetValidade()
{
  return Valido;
}
Horario::Horario() : hora{0}, minuto{0}, Valido{true}
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
