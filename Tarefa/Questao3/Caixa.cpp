#include "Caixa.h"

Caixa::Caixa()
{
    largura = 0;
    altura = 0;
    profundidade = 0;
}
Caixa::~Caixa()
{
}
void Caixa::setLargura(float l)
{
    largura = l;
}

void Caixa::setAltura(float a)
{
    altura = a;
}

void Caixa::setProfundidade(float p)
{
    profundidade = p;
}
float Caixa::calcularAreaExt()
{
    return 2*(largura * altura + largura * profundidade +altura * profundidade);
}

float Caixa::calcularVolume()
{
    return largura * altura * profundidade;
}
