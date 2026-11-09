#include "Gerenciador_Colisoes.h"

Gerenciador_Colisoes::Gerenciador_Colisoes()
{
    //ctor
}

Gerenciador_Colisoes::~Gerenciador_Colisoes()
{
    //dtor
}
void Gerenciador_Colisoes::tratarColisoesJogsObstacs()
{
    sf::CircleShape& circulo = jogador.getCirculo();

    sf::FloatRect parede = circulo.getGlobalBounds();

    if (parede.left < 0.f) {
        circulo.setPosition(0.f, circulo.getPosition().y);
    }

    // Parede Direita
    if (parede.left + parede.width > 1020) {
        circulo.setPosition(1020 - parede.width, circulo.getPosition().y);
    }

    // Teto
    if (parede.top < 0.f) {
        circulo.setPosition(circulo.getPosition().x, 0.f);
    }

    // Chão
    if (parede.top + parede.height > 720) {
        circulo.setPosition(circulo.getPosition().x, 720 - parede.height);
    }

}
void Gerenciador_Colisoes::tratarColisoesJogsInimgs()
{
    sf::RectShape& retangulo = inimigo.getRetangulo();
    sf::CircleShape& circulo = jogador.getCirculo();

    sf::FloatRect Ljogador = circulo.getGlobalBounds();
    sf::FloatRect Linimigo = retangulo.getGlobalBounds();

    if (Linimigo.left < Ljogador.right) {
        circulo.num_vidas--;
        circulo.setPosition(circulo.getPosition().x-2, circulo.getPosition().y);
    }

    if (Ljogador.left > Linimigo.right) {
        circulo.num_vidas--;
        circulo.setPosition(circulo.getPosition().x+2, circulo.getPosition().y);
    }

    if (Ljogador.top>Linimigo.height ) {
        circulo.num_vidas--;
    }

    if (Ljogador.height > Linimigo.top) {
        circulo.num_vidas--;
    }

}
void Gerenciador_Colisoes::executar()
{
    tratarColisoesJogsObstacs(jogador* jogador)
}
