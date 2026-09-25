#pragma once
#include "Professor.h"
#include "Universidade.h"
#include "Departamento.h"
class Principal
{
    private:
        Professor Simao;
        Professor Einstein;
        Professor Newton;


        Universidade UTFPR;
        Universidade Princeton;
        Universidade Cambridge;

        Departamento Dainf;
        Departamento Matematica;
        Departamento Fisica;


    public:
        Principal();
        void  Executar();
};
