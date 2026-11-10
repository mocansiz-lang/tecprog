#include "Jogador.h"
#include "Inim_Facil.h"
Jogador::Jogador()
{

    circulo.setRadius(50.f);
    circulo.setFillColor(sf::Color::Green);
    circulo.setPosition(375.f, 275.f);
}
void Jogador::mover()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        circulo.move(sf::Vector2f(2.0f, 0.f));
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        circulo.move(sf::Vector2f(-2.0f, 0.f));
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        circulo.move(sf::Vector2f(0.f, -2.0f));
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        circulo.move(sf::Vector2f(0.f, 2.0f));
    }
}
void Jogador::executar()
{
    mover();
}
void Jogador::desenhar()
{
    pGG->getWindow()->draw(circulo);
}


void Jogador::salvar()
{
}
