#pragma once

class Horario
{
    private:
    int hora;
    int minuto;
    public:
    int GetHora();
    int GetMin();

    bool SetHora(int h);
    bool SetMin(int m);

    int CalculaIntervalo(Horario h);
    Horario();
    ~Horario();
};
