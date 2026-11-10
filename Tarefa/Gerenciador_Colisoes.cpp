#include "Gerenciador_Colisoes.h"

Gerenciador_Colisoes::Gerenciador_Colisoes(Jogador* Pessoa, Inimigo* inimigos) :
    player1(Pessoa), inimigo(inimigos)
{
}

Gerenciador_Colisoes::~Gerenciador_Colisoes()
{
}

bool Gerenciador_Colisoes::verificarColisao(Entidade* pe1, Entidade* pe2) const
{
    return pe1->getLados().intersects(pe2->getLados());
}



void Gerenciador_Colisoes::tratarColisoesJogsObstacs()
{
}

void Gerenciador_Colisoes::tratarColisoesJogsParedes()
{
    //salvar os limites do jogador e a sua cordenada
    sf::FloatRect lado = player1->getCirculo().getGlobalBounds();
    sf::Vector2f pos = player1->getCirculo().getPosition();

    //parede esquerda
    if (lado.left < 0)
        pos.x -= lado.left;
    //parede direita
    if (lado.left + lado.width > W_LARGURA)
        pos.x -= (lado.left + lado.width - W_LARGURA);
    //teto
    if (lado.top < 0)
        pos.y -= lado.top;
    //chao
    if (lado.top + lado.height > W_ALTURA)
        pos.y -= (lado.top + lado.height - W_ALTURA);
    //recoloca o jogador na sua nova posicao
    player1->getCirculo().setPosition(pos);

}
void Gerenciador_Colisoes::tratarColisoesJogsInimgs()
{
    if (verificarColisao(player1, inimigo))
    {
        sf::Vector2f Playerpos = player1->getCirculo().getPosition();
        sf::FloatRect Inimpos = inimigo->getLados();

        if (Playerpos.x < Inimpos.left)
            Playerpos.x -= 20.f;
        else
            Playerpos.x += 20.f;

        player1->getCirculo().setPosition(Playerpos);
    }


}
void Gerenciador_Colisoes::executar()
{
    tratarColisoesJogsParedes();
    tratarColisoesJogsInimgs();

}
