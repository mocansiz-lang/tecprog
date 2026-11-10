#include "Jogo.h"

Jogo::Jogo() : GG(), jogador(),inimigo(), GC(&jogador, &inimigo)
{
}
Jogo::~Jogo()
{
}
void Jogo::executar()
{
    while (GG.getWindow()->isOpen())
    {
        //Gerenciador de eventos esta na execucao para testes, provavelmente saira daqui depois
        sf::Event event;
        while (GG.getWindow()->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                GG.getWindow()->close();
        }
        jogador.executar();
        GC.executar();
        GG.getWindow()->clear(sf::Color::Black);
        jogador.Ente::desenhar();
        GG.getWindow()->draw(inimigo.getRetangulo());


        GG.getWindow()->display();
    }
}