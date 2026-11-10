#pragma once
#include "Personagem.h"
#include "GerenciadorGrafico.h"
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
        void desenhar();
        sf::FloatRect getLados()
        {
            return circulo.getGlobalBounds();
        }
        sf::CircleShape& getCirculo() { return circulo; }


};


