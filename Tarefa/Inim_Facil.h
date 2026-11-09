#ifndef INIM_FACIL_H
#define INIM_FACIL_H

#include <Inimigo.h>


class Inim_Facil : public Inimigo
{
    public:
        Inim_Facil();
        virtual ~Inim_Facil();

    protected:

    private:
        sf::RectShape retangulo;

};

#endif // INIM_FACIL_H
