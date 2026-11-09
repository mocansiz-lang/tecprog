#ifndef INIMIGO_H
#define INIMIGO_H
#include "Personagem.h"



class inimigo: public Personagem
{
    public:
        inimigo();
        ~inimigo();
        sf::RectShape& getRetangulo() { return retangulo; }
        void executar();
        void salvar();


    private:

};





