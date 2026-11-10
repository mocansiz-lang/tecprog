#pragma once
#include "GerenciadorGrafico.h"

class Ente //classe abstrata pura, pode ser menu, fase ou entidade
{
protected:
    int id;
    static int contId; //nao ta no uml, pela minha interpretacao de id faz sentido exisitir

    static GerenciadorGrafico* pGG;
    //no uml tem um ponteiro tipo Figura, imagino q isso seja a textura do Ente

public:
    Ente();
    virtual ~Ente();

    virtual void executar() = 0;
    void desenhar();

    static void setGG(GerenciadorGrafico* pG) { pGG = pG; }

};