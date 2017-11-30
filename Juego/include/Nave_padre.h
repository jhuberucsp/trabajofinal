#ifndef NAVE_PADRE_H
#define NAVE_PADRE_H
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include <stdlib.h>
#include<list>
using namespace std;

#define ARRIBA 72 //DEFINIMOS PARA PODER UTILIZAR LAS TECLAS DIRECCIONALES
#define IZQUIERDA 75//HACEN REFRENCIA AL CODIGO ACCI
#define DERECHA 77
#define ABAJO 80

class Nave_padre
{
    public:
        Nave_padre();
        virtual ~Nave_padre();
        virtual void gotoxy(int x,int y);
        void esconder_();
        virtual int X();
        virtual int Y();

};


#endif // NAVE_PADRE_H
