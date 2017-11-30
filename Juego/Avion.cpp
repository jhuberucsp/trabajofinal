#include<stdio.h>
#include<windows.h>
#include<conio.h>

#define ARRIBA 72 //DEFINIMOS PARA PODER UTILIZAR LAS TECLAS DIRECCIONALES
#define IZQUIERDA 75//HACEN REFRENCIA AL CODIGO ACCI
#define DERECHA 77
#define ABAJO 80
void gotoxy(int x,int y)//la funcion recive dos paramaettro que son las cordenadas de posicion
{ HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);//cordenadas de posicion de un objeto
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hCon,dwPos );

}
void esconder_(){
HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;//ayuda a controlar la apariencia del cursor
    cci.dwSize=2;//dwSize es valor entero que represeta un estilo doferente mayor el numero mas grueso el cursor
    cci.bVisible= FALSE;    //pVisible si es flaso no se mostrara
    SetConsoleCursorInfo(hCon,&cci);}//tiene que pasar por referencia}


int main(){

    esconder_();
    int x=10,y=10;// estamos dando una posicion por defecto
    gotoxy(x,y); printf("$");//gotoxy indicara las cordenadas donde el printf imprimira
    bool game_over=false;//estara imprimiendo los cambios realizados  hasta que game over sea true
    while(!game_over){
            //gotoxy(x,y);printf("*"); se paso abajo por que se imprimia en cada iteracion

            if(kbhit()){//funcion que permite saber si se pulsa una tecla
                char tecla=getch();//tecla almacena un caracter getch guarda el valor de la tecla pulsada
                gotoxy(x,y);printf(" ");//esto es la posicion anterior y borra despues del cambio de posicion
                if(tecla=='j'||tecla==IZQUIERDA )x--;//permite desplazar mediante las cordenadas(IZQUIERDA)
                if (tecla=='l'||tecla==DERECHA)x++;//DERECHA
                if (tecla=='i'||tecla==ARRIBA)y--;//ARRIBA OJO la cordenada Y esta invertida
                if (tecla=='k'||tecla==ABAJO)y++;//ABAJO
                gotoxy(x,y);printf("*");
            }
            Sleep(30);//Detiene las iteraciones por segundo esto ayuda al procesador
    }
    return 0;}
