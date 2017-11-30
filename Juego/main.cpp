#include <iostream>
#include"NAVE.h"
#include "Nave_padre.h"
#include"AST.h"
#include"BALA.h"
#include<list>
using namespace std;


void gotoxy(int x,int y)//la funcion recive dos paramaettro que son las cordenadas de posicion
{ HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);//cordenadas de posicion de un objeto
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hCon,dwPos );

};

int main(){

    Nave_padre S;
    S.esconder_();
    NAVE N(20,20,3,3);
    N.pintar_limite();
    N.vidas();
    N.pintar();
    AST ast(10,4);
    list<BALA*>B;
    list<BALA*>::iterator ite;
    list<AST*>A;
    list<AST*>::iterator ite2;//cantidad de asteroides
    for(int i=0;i<3;i++){
       A.push_back(new AST((rand()%75  +3),(rand()%5+ 4)));
    }
    bool game_over=false;//estara imprimiendo los cambios realizados  hasta que game over sea true
    while(!game_over){


           if(kbhit())
           {
               char tecla=getch();
               if(tecla=='a'){
                B.push_back(new BALA((N.X()+2),(N.Y()-1)));
               }}
            for(ite = B.begin(); ite !=B.end(); ite ++)//recorremos la lista
            {
                (*ite)->fuego();
                if((*ite)->fuera()) //verifica el limite
            {
                (*ite)->gotoxy((*ite)->X(),(*ite)->Y());printf(" ");
                delete(*ite);
                ite= B.erase(ite);//pasa a la siguiente posicion NEXT
            }
            }
            for(ite2=A.begin();ite2 !=A.end(); ite2++){
           (*ite2)->mover();
           (*ite2)->choque(N);}
           for(ite2=A.begin();ite2!=A.end(); ite2++){
            for(ite=B.begin();ite!=B.end();ite++){
                if((*ite2)->X()==(*ite)->X()&&(( (*ite2)->Y()+1==(*ite)->Y()) || (*ite2)->Y()==(*ite)->Y()))
                {

                    /*(*ite)->*/gotoxy(((*ite)->X()),((*ite)->Y())); printf(" ");
                    delete(*ite);
                    ite= B.erase(ite);

                    A.push_back(new AST((rand()%74  +3),4));
                    /*(*ite)->*/gotoxy(((*ite2)->X()),((*ite2)->Y())); printf(" ");
                    delete(*ite2);
                    ite2= A.erase(ite2);

                    N.punto=N.punto +5;
                }
            }
           }
           if (N.vi_da()==0){game_over=true;}
            N.morir();
            N.mover();

            Sleep(30);//Detiene las iteraciones por segundo esto ayuda al procesador
    }
    gotoxy(15,15);printf("GAME OVER");
    return 0;}
