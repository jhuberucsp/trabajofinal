#ifndef BALA_H
#define BALA_H
#include"Nave_padre.h"

class BALA : Nave_padre
{
    public:
        BALA(int _x,int _y);
        virtual ~BALA();
        void fuego();
        bool fuera();
        void gotoxy(int x,int y);
        int X();
        int Y();

    private:
        int X_;
        int Y_;
};

#endif // BALA_H
