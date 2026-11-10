#include "Ente.h"
GerenciadorGrafico* Ente::pGG = nullptr;
int Ente::contId(0);

Ente::Ente() : id(contId++)
{
}
Ente::~Ente()
{
    contId--;
}

void Ente::desenhar()
{
    if (!pGG)
    {
        std::cout << "Erro, gerenciador grafico nao encontrado" << std::endl;
        exit(1);
    }
    pGG->desenharEnte(this);
}
