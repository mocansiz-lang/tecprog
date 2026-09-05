#pragma once
#include <stdio.h>

class Departamento
{
    private:
        char Depart[30];
    public:
        Departamento(const char n[] = "");
        void InformaNome();
};
