#pragma once
#include "GerenciadorGrafico.h"
#include "Jogador.h"
#include "Inim_Facil.h"
#include "Gerenciador_Colisoes.h"

class Jogo
{
private:
    GerenciadorGrafico GG;
    Jogador jogador;
    Inim_Facil inimigo;
    Gerenciador_Colisoes GC;
public:
    Jogo();
    ~Jogo();
    void executar();


};