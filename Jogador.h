#pragma once
#include "Personagem.h"
class Jogador :
    public Personagem
{
    private:
    sf::CircleShape circulo;

    public:
        Jogador();
        void mover();
        void executar();
        void salvar();
        sf::FloatRect getLados()
        {
            return circulo.getGlobalBounds();
        }
        sf::CircleShape& getCirculo() { return circulo; }


};


