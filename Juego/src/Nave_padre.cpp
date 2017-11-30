#include "Nave_padre.h"

Nave_padre::Nave_padre()
{
    //ctor
}

Nave_padre::~Nave_padre()
{
    //dtor
}
int Nave_padre::X(){return 0;}
int Nave_padre::Y(){return 1;}
void Nave_padre::gotoxy(int x,int y)//la funcion recive dos paramaettro que son las cordenadas de posicion
{ HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);//cordenadas de posicion de un objeto
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hCon,dwPos );

}
void Nave_padre::esconder_()
{
HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;//ayuda a controlar la apariencia del cursor
    cci.dwSize=2;//dwSize es valor entero que represeta un estilo doferente mayor el numero mas grueso el cursor
    cci.bVisible= FALSE;    //pVisible si es flaso no se mostrara
    SetConsoleCursorInfo(hCon,&cci);}//tiene que pasar por referencia}

