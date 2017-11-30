#include "BALA.h"

BALA::BALA(int _x,int _y): X_(_x), Y_(_y){}

BALA::~BALA()
{}
void BALA::fuego()
{
    gotoxy(X_,Y_);printf(" ");
    // esta esra una condicion de limite pero pasa a FUERA if(Y_ >4){Y_--;}   gotoxy(X_,Y_);printf("°");}
    Y_--;
    gotoxy(X_,Y_);printf("°");}
bool BALA::fuera()
{
    if (Y_==4){//LIMITE DE CUADRO
        return true;}
        return false;}
        // SI ES FALSA CONTINUA SUBIENDO
int BALA::X(){return X_;}
int BALA::Y(){return Y_;}

void BALA::gotoxy(int x,int y)
{   HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);//cordenadas de posicion de un objeto
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hCon,dwPos );

}
