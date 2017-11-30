#include "Avion.h"

Avion::Avion()
{
    //ctor
}

Avion::~Avion()
{
    //dtor
}
void Avion::gotoxy(int x,int y)//la funcion recive dos paramaettro que son las cordenadas de posicion
{ HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);//cordenadas de posicion de un objeto
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hCon,dwPos );

}
void Avion::esconder_()
{
HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;//ayuda a controlar la apariencia del cursor
    cci.dwSize=2;//dwSize es valor entero que represeta un estilo doferente mayor el numero mas grueso el cursor
    cci.bVisible= FALSE;    //pVisible si es flaso no se mostrara
    SetConsoleCursorInfo(hCon,&cci);}//tiene que pasar por referencia}

