#include "NAVE.h"

NAVE::NAVE(int _x,int _y,int _vida,int _cora): x1(_x),y1(_y),vid(_vida),corazon(_cora){}

NAVE::~NAVE()
{
    //dtor
}
int NAVE::X(){return x1;}
int NAVE::Y(){return y1;}
int NAVE::vi_da(){return vid;}
void NAVE::COR(){corazon--;}
void NAVE::pintar()
{   gotoxy(4,2);printf("Puntos : %d",punto);
    gotoxy(x1,y1);printf("  %c",30);
    gotoxy(x1,y1+1);printf(" %c%c%c",40,207,41);
    gotoxy(x1,y1+2);printf("%c%c %c%c",30,190,190,30);
}
void NAVE::borrar(){
gotoxy(x1,y1)  ;printf("      ");
gotoxy(x1,y1+1);printf("         ");
gotoxy(x1,y1+2);printf("        ");}

void NAVE::pintar_limite()
{
    for(int i=2;i<78;i++){
        gotoxy(i,3);printf("%c",205);
        gotoxy(i,33);printf("%c",205);
    }
    for(int i=4;i<33;i++){
        gotoxy(2,i);printf("%c",186);
        gotoxy(77,i);printf("%c",186);
    }
    gotoxy(2,3);printf("%c",201);
    gotoxy(2,33);printf("%c",200);
    gotoxy(77,3);printf("%c",187);
    gotoxy(3,77);printf("%c",188);
}
void NAVE::vidas(){//pinta corazones
    gotoxy(50,2);printf("VIDAS %d",vid);
    gotoxy(64,2);printf("Salud :        ");
    for(int i=0;i<corazon;i++){
            gotoxy(70+i,2);printf("%c",3);}
    }
void NAVE::mover()
{
    if(kbhit()){//funcion que permite saber si se pulsa una tecla
                char tecla=getch();//tecla almacena un caracter getch guarda el valor de la tecla pulsada
                borrar(); //esto es la posicion anterior y borra despues del cambio de posicion
                if((/*tecla=='j'||*/tecla==IZQUIERDA)&&x1>3 )x1--;//permite desplazar mediante las cordenadas(IZQUIERDA)
                if ((/*tecla=='l'||*/tecla==DERECHA)&&(x1+6)<75)x1++;//DERECHA
                if ((/*tecla=='i'||*/tecla==ARRIBA)&&y1>4)y1--;//ARRIBA OJO la cordenada Y esta invertida
                if ((/*tecla=='k'||*/tecla==ABAJO)&&(y1+3)<33)y1++;//ABAJO
                //if (tecla=='e') corazon--;
                pintar();//dibuja el avion
                vidas();
            }

}

void NAVE::morir()
{
    if(corazon==0){
        borrar();
        gotoxy(x1,y1);printf("  °#°  ");
        gotoxy(x1,y1+1);printf(" °###°");
        gotoxy(x1,y1+2);printf("  °##° ");
        Sleep(200);
        borrar();
        gotoxy(x1,y1);printf(" ° * °");
        gotoxy(x1,y1+1);printf(" ° * * °");
        gotoxy(x1,y1+2);printf("  °*°");
        Sleep(200);
        borrar();
        vid--;
        corazon=3;
        vidas();
        pintar();
    }
}
void NAVE ::esconder_(){};
