#ifndef AVION_H
#define AVION_H
#include<stdio.h>
#include<windows.h>
#include<conio.h>

#define ARRIBA 72 //DEFINIMOS PARA PODER UTILIZAR LAS TECLAS DIRECCIONALES
#define IZQUIERDA 75//HACEN REFRENCIA AL CODIGO ACCI
#define DERECHA 77
#define ABAJO 80

class Avion
{
    public:
        Avion();
        virtual ~Avion();
        void gotoxy(int x,int y);
        void esconder_()
    protected:

    private:
};

#endif // AVION_H
