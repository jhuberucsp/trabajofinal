#ifndef NAVE_H
#define NAVE_H
#include"Nave_padre.h"
#include"BALA.h"

class NAVE : Nave_padre
{
    public:
        int punto=0;
        NAVE(int _x,int _y,int _vida,int _cora);
        virtual ~NAVE();int vi_da();
        int X();// ya estan heredadas e Nave_padre
        int Y();
        void COR();
        void pintar();
        void pintar_limite();
        void borrar();
        void mover();
        void esconder_();
        void vidas();
        void morir();

    protected:

    private:
        int x1,y1,corazon,vid;//cooordenads

};

#endif // NAVE_H
