#include "GerenciadorGrafico.h"
#include "Ente.h"

GerenciadorGrafico::GerenciadorGrafico() :
    window(new sf::RenderWindow(sf::VideoMode(W_LARGURA, W_ALTURA), NOME_JOGO))
{
    if (!window)
    {
        std::cout << "Erro ao criar janela" << std::endl;
        exit(1);
    }
    window->setFramerateLimit(MAX_FPS);
}
GerenciadorGrafico::~GerenciadorGrafico()
{
    if (window)
    {
        delete window;
        window = nullptr;
    }
}
void GerenciadorGrafico::desenharEnte(Ente* pE)
{
    pE->desenhar();

    /*TODO: como esta funcao vai funcionar e algo bem flexivel, pois o processo de desenhar um menu, uma fase
    e uma entidade e bem diferente
    */
}
