#pragma once

class Horario
{
    private:
    int hora;
    int minuto;
    bool Valido;
    public:
    Horario(int h, int m);
    Horario();
    ~Horario();


    int GetHora();
    int GetMin();

    bool SetHora(int h);
    bool SetMin(int m);
    bool GetValidade();


    int CalculaIntervalo(Horario h);

};
