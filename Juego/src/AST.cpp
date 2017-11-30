#include "AST.h"

AST::AST(int _x,int _y): x(_x),y(_y){}

AST::~AST()
{
    //dtor
}
int AST::X(){return x;}
int AST::Y(){return y;}
void AST::pintar(){
    gotoxy(x,y);printf("%c",184);
    }
void AST::mover()
{
    gotoxy(x,y);printf("  ");
    y++;
    if (y>32){
        x=rand()%71+4;
        y=4;
    }
    pintar();
}
void AST::choque(class NAVE &N)
{
    if(((x>=N.X()) && (x<N.X()+5))&&(y>=N.Y())&&( y<=N.Y()+2))
    {
        N.COR();
        N.borrar();
        N.pintar();
        N.vidas();
        x=rand()%71+4;
        y=4;
    }
}
