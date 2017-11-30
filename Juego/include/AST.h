#ifndef AST_H
#define AST_H
#include "Nave_padre.h"
#include"NAVE.h"
class AST : Nave_padre
{
    public:
        AST(int _x,int _y);
        virtual ~AST();
        void pintar();
        void mover();
        void choque(class NAVE &N);
        int X();
        int Y();


    private:
        int x,y;
};

#endif // AST_H
