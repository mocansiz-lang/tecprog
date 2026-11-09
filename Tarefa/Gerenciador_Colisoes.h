#ifndef GERENCIADOR_COLISOES_H
#define GERENCIADOR_COLISOES_H
#include "jogador.h"
#include "Inim_Facil.h"

class Gerenciador_Colisoes
{
    public:
        Gerenciador_Colisoes();
        virtual ~Gerenciador_Colisoes();
        void tratarColisoesJogsObstacs(&jogador);
        void tratarColisoesJogsInimgs(&Inim_Facil);

        void executar();
    protected:



    private:



};

#endif // GERENCIADOR_COLISOES_H
