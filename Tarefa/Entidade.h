#pragma once
#include "Ente.h"

class Entidade : public Ente //classe abstrata pura, pode ser projetil, obstaculo, personagem
{
protected:
    int x;
    int y;

    //tem o buffer aq, nao sei ao certo qual sera a funcao dele
    void salvarDataBuffer();

public:
    Entidade();
    virtual ~Entidade();
    virtual sf::FloatRect getLados() = 0;
    virtual void executar() = 0;
    virtual void salvar() = 0;



};