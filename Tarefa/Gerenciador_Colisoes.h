#pragma once
#include "Jogador.h"
#include "Inimigo.h"

class Gerenciador_Colisoes
{
    private:
        Jogador* player1;
        Inimigo* inimigo;

    public:
        Gerenciador_Colisoes(Jogador* Pessoa, Inimigo* inimigos);
        ~Gerenciador_Colisoes();
        bool  verificarColisao(Entidade* pe1, Entidade* pe2) const;
        void tratarColisoesJogsObstacs();
        void tratarColisoesJogsParedes();
        void tratarColisoesJogsInimgs();

        void executar();


};

