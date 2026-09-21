#pragma once

class Caixa
{
    private:
         float largura;
         float altura;
         float profundidade;
    public:
        Caixa();
        ~Caixa();

         void setLargura(float l);
         void setAltura(float a);
         void setProfundidade(float p);

         float calcularAreaExt();
         float calcularVolume();

};
