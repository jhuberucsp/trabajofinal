#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>
#include<graphics.h>
#include<bios.h>

void
matanza(void),
presentacion(void),
fin(void);
void
spider(int,int),
carz1(int,int),carz2(int,int),carz3(int,int),carz4(int,int),
card1(int,int),card2(int,int),card3(int,int),card4(int,int);

int x=300,y=0,key=0,vidas=5,puntos=0,iori=DETECT,angel,mei=0,
    //carros izquierdos
    cz1=0,cz2=0,cz3=0,cz4=0,cz5=0,cz6=0,cyz1=250,
    czz1=0,czz2=0,czz3=0,czz4=0,czz5=0,czz6=0,cyz2=120,
    zzz1=0,zzz2=0,zzz3=0,zzz4=0,zzz5=0,zzz6=0,cyz3=360,
    zzzz1=0,zzzz2=0,zzzz3=0,zzzz4=0,zzzz5=0,zzzz6=0,cyz4=30,
    //carros derechos
    cd1=630,cd2=730,cd3=830,cd4=930,cd5=1030,cd6=1130,cyd1=300,
    cdd1=630,cdd2=730,cdd3=830,cdd4=930,cdd5=1030,cdd6=1130,cyd2=70,
    ddd1=630,ddd2=730,ddd3=830,ddd4=930,ddd5=1030,ddd6=1130,cyd3=160,
    dddd1=630,dddd2=730,dddd3=830,dddd4=930,dddd5=1030,dddd6=1130,cyd4=400;

void main(void)
{
initgraph(&iori,&angel,"");
matanza();
presentacion();
iori666:;
x=300;
y=0;
setbkcolor(8);
while(key!=27)
{

cleardevice();
     if(kbhit())
     {
	key=getch();
	if(key==75) x = x -10;
	if(key==77) x = x +10;
	if(key==72) y = y -10;
	if(key==80) y = y +10;
     }
	if(x>=getmaxx()-30) x = getmaxx() - 30;
	if(x<=30) x = 30;
	if(y>=getmaxy()-10) y = getmaxy() - 10;
	if(y<=10) y = 10;
	//COORDENADAS DERECHAS
	if(cz1>=getmaxx())cz1=0;
	if(cz2>=getmaxx()+100)cz2=0;
	if(cz3>=getmaxx()+200)cz3=0;
	if(cz4>=getmaxx()+300)cz4=0;
	if(cz5>=getmaxx()+400)cz5=0;
	if(cz6>=getmaxx()+500)cz6=0;
	if(czz1>=getmaxx())czz1=0;
	if(czz2>=getmaxx()+100)czz2=0;
	if(czz3>=getmaxx()+200)czz3=0;
	if(czz4>=getmaxx()+300)czz4=0;
	if(czz5>=getmaxx()+400)czz5=0;
	if(czz6>=getmaxx()+500)czz6=0;
	if(zzz1>=getmaxx())zzz1=0;
	if(zzz2>=getmaxx()+100)zzz2=0;
	if(zzz3>=getmaxx()+200)zzz3=0;
	if(zzz4>=getmaxx()+300)zzz4=0;
	if(zzz5>=getmaxx()+400)zzz5=0;
	if(zzz6>=getmaxx()+500)zzz6=0;
	if(zzzz1>=getmaxx())zzzz1=0;
	if(zzzz2>=getmaxx()+100)zzzz2=0;
	if(zzzz3>=getmaxx()+200)zzzz3=0;
	if(zzzz4>=getmaxx()+300)zzzz4=0;
	if(zzzz5>=getmaxx()+400)zzzz5=0;
	if(zzzz6>=getmaxx()+500)zzzz6=0;

	//coordenadas derechas
	if(cd1<=0)   cd1=630;
	if(cd2<=-100) cd2=730;
	if(cd3<=-200) cd3=830;
	if(cd4<=-300) cd4=930;
	if(cd5<=-400) cd5=1030;
	if(cd6<=-500) cd6=1130;
	if(cdd1<=0)   cdd1=630;
	if(cdd2<=-100) cdd2=730;
	if(cdd3<=-200) cdd3=830;
	if(cdd4<=-300) cdd4=930;
	if(cdd5<=-400) cdd5=1030;
	if(cdd6<=-500) cdd6=1130;
	if(ddd1<=0)   ddd1=630;
	if(ddd2<=-100)ddd2=730;
	if(ddd3<=-200) ddd3=830;
	if(ddd4<=-300) ddd4=930;
	if(ddd5<=-400) ddd5=1030;
	if(ddd6<=-500) ddd6=1130;
	if(dddd1<=0)   dddd1=630;
	if(dddd2<=-100)dddd2=730;
	if(dddd3<=-200) dddd3=830;
	if(dddd4<=-300) dddd4=930;
	if(dddd5<=-400) dddd5=1030;
	if(dddd6<=-500) dddd6=1130;
    //arriba hacia abajo
    //opciones de destrucci¢n para  fila 5
    if((x>=cz1 && x<=cz1+35 && y>=cyz1-5 && y<=cyz1+15) || (x>=cz2-100 && x<=cz2-70 && y>=cyz1-5 && y<=cyz1+15)||(x>=cz3-200 && x<=cz3-170 && y>=cyz1-5 && y<=cyz1+15)||(x>=cz4-300 && x<=cz4-270 && y>=cyz1-5 && y<=cyz1+15)||(x>=cz5-400 && x<=cz5-370 && y>=cyz1-5 && y<=cyz1+15)||(x>=cz6-500 && x<=cz6-470 && y>=cyz1-5 && y<=cyz1+15))
	{
	  vidas=vidas-1;
	  for(int i=0;i<100;i++)
		circle(300,200,i);
	  delay(200);
	 goto iori666;
	  }
    //opcion  de destruccion fila 3
    if((x>=czz1 && x<=czz1+35 && y>=cyz2-5 && y<=cyz2+15) || (x>=czz2-100 && x<=czz2-70 && y>=cyz2-5 && y<=cyz2+15)||(x>=czz3-200 && x<=czz3-170 && y>=cyz2-5 && y<=cyz2+15)||(x>=czz4-300 && x<=czz4-270 && y>=cyz2-5 && y<=cyz2+15)||(x>=czz5-400 && x<=czz5-370 && y>=cyz2-5 && y<=cyz2+15)||(x>=czz6-500 && x<=czz6-470 && y>=cyz2-5 && y<=cyz2+15))
	{
	  vidas=vidas-1;
	  for(int i=0;i<100;i++)
		circle(300,200,i);
	  delay(200);
	 goto iori666;
	  }
     //OPCION DE DESTRUCCION FILA  7
     if((x>=zzz1 && x<=zzz1+35 && y>=cyz3-5 && y<=cyz3+15) || (x>=zzz2-100 && x<=zzz2-70 && y>=cyz3-5 && y<=cyz3+15)||(x>=zzz3-200 && x<=zzz3-170 && y>=cyz3-5 && y<=cyz3+15)||(x>=zzz4-300 && x<=zzz4-270 && y>=cyz3-5 && y<=cyz3+15)||(x>=zzz5-400 && x<=zzz5-370 && y>=cyz3-5 && y<=cyz3+15)||(x>=zzz6-500 && x<=zzz6-470 && y>=cyz3-5 && y<=cyz3+15))
	  {
	  vidas=vidas-1;
	  for(int i=0;i<100;i++)
		circle(300,200,i);
	  delay(200);
	 goto iori666;
	  }
     //OPCION DE DESTRUCCION FILA  1
     if((x>=zzzz1 && x<=zzzz1+35 && y>=cyz4-5 && y<=cyz4+15) || (x>=zzzz2-100 && x<=zzzz2-70 && y>=cyz4-5 && y<=cyz4+15)||(x>=zzzz3-200 && x<=zzzz3-170 && y>=cyz4-5 && y<=cyz4+15)||(x>=zzzz4-300 && x<=zzzz4-270 && y>=cyz4-5 && y<=cyz4+15)||(x>=zzzz5-400 && x<=zzzz5-370 && y>=cyz4-5 && y<=cyz4+15)||(x>=zzzz6-500 && x<=zzzz6-470 && y>=cyz4-5 && y<=cyz4+15))
	{
	  vidas=vidas-1;
	  for(int i=0;i<100;i++)
		circle(300,200,i);
	  delay(200);
	  goto iori666;
	  }
      //OPCION DE DESTRUCCION  FILA 6
      if((x>=cd1-35 && x<=cd1+30 && y>=cyd1-5 && y<=cyd1+15) || (x>=cd2-35 && x<=cd2+30 && y>=cyd1-5 && y<=cyd1+15)||(x>=cd3-35 && x<=cd3+30 && y>=cyd1-5 && y<=cyd1+15)||(x>=cd4-35 && x<=cd4+30 && y>=cyd1-5 && y<=cyd1+15)||(x>=cd5-35 && x<=cd5+30 && y>=cyd1-5 && y<=cyd1+15)||(x>=cd6-35 && x<=cd6+30 && y>=cyd1-5 && y<=cyd1+15))
	 {
	  vidas=vidas-1;
	  for(int i=0;i<100;i++)
		circle(300,200,i);
	  delay(200);
	 goto iori666;
	  }
	//OPCION DE DESTRUCCION FILA  2
	if((x>=cdd1-35 && x<=cdd1+30 && y>=cyd2-5 && y<=cyd2+15) || (x>=cdd2-35 && x<=cdd2+30 && y>=cyd2-5 && y<=cyd2+15)||(x>=cdd3-35 && x<=cdd3+30 && y>=cyd2-5 && y<=cyd2+15)||(x>=cdd4-35 && x<=cdd4+30 && y>=cyd2-5 && y<=cyd2+15)||(x>=cdd5-35 && x<=cdd5+30 && y>=cyd2-5 && y<=cyd2+15)||(x>=cdd6-35 && x<=cdd6+30 && y>=cyd2-5 && y<=cyd2+15))
	  {
	  vidas=vidas-1;
	  for(int i=0;i<100;i++)
		circle(300,200,i);
	  delay(200);
	 goto iori666;
	  }
	//OPCION DE DESTRUCCION FILA 4
	if((x>=ddd1-35 && x<=ddd1+30 && y>=cyd3-5 && y<=cyd3+15) || (x>=ddd2-35 && x<=ddd2+30 && y>=cyd3-5 && y<=cyd3+15)||(x>=ddd3-35 && x<=ddd3+30 && y>=cyd3-5 && y<=cyd3+15)||(x>=ddd4-35 && x<=ddd4+30 && y>=cyd3-5 && y<=cyd3+15)||(x>=ddd5-35 && x<=ddd5+30 && y>=cyd3-5 && y<=cyd3+15)||(x>=ddd6-35 && x<=ddd6+30 && y>=cyd3-5 && y<=cyd3+15))
	  {
	  vidas=vidas-1;
	  for(int i=0;i<100;i++)
		circle(300,200,i);
	  delay(200);
	goto iori666;
	  }
	//OPCION DESTRUCCION FILA 8
	  if((x>=dddd1-35 && x<=dddd1+30 && y>=cyd4-5 && y<=cyd4+15) || (x>=dddd2-35 && x<=dddd2+30 && y>=cyd4-5 && y<=cyd4+15)||(x>=dddd3-35 && x<=dddd3+30 && y>=cyd4-5 && y<=cyd4+15)||(x>=dddd4-35 && x<=dddd4+30 && y>=cyd4-5 && y<=cyd4+15)||(x>=dddd5-35 && x<=dddd5+30 && y>=cyd4-5 && y<=cyd4+15)||(x>=dddd6-35 && x<=dddd6+30 && y>=cyd4-5 && y<=cyd4+15))
	  {
	  vidas=vidas-1;
	  for(int i=0;i<100;i++)
		circle(300,200,i);
	  delay(200);
	goto iori666;
	  }
     if(vidas==0)
	{
	key=27;
	}
      if(y==getmaxy()-10)
       {
	puntos+=100;
	setcolor(15);
	setbkcolor(0);
	outtextxy(200,200,"GOOD!!!");
	delay(500);
	goto iori666;
	}

gotoxy(5,14);printf("VIDAS  %d",vidas);
gotoxy(25,14);printf("PUNTOS   %d",puntos);
carz1(cz1,cyz1);
carz2(czz1,cyz2);
carz3(zzz1,cyz3);
carz4(zzzz1,cyz4);
card1(cd1,cyd1);
card2(cdd1,cyd2);
card3(ddd1,cyd3);
card4(dddd1,cyd4);
matanza();
spider(x,y);

cz1++;cz2++,cz3++,cz4++,cz5++;
czz1+=8;czz2+=8,czz3+=8,czz4+=8,czz5+=8,czz6+=8;
zzz1+=5;zzz2+=5,zzz3+=5,zzz4+=5,zzz5+=5,zzz6+=5;
zzzz1+=3;zzzz2+=3,zzzz3+=3,zzzz4+=3,zzzz5+=3,zzzz6+=3;

cd1--,cd2--,cd3--,cd4--,cd5--,cd6--;
cdd1-=4;cdd2-=4;cdd3-=4;cdd4-=4;cdd5-=4;cdd6-=4;
ddd1-=9;ddd2-=9;ddd3-=9;ddd4-=9;ddd5-=9;ddd6-=9;
dddd1-=6;dddd2-=6;dddd3-=6;dddd4-=6;dddd5-=6;dddd6-=6;

//ESTE ES PARA QUE NO PARPADEA TANTO LA PANTALLA
delay(10);

}
fin();
closegraph();
}

void matanza(void)
{
setfillstyle(1,1);
//BORDE INFERIOR
bar(0,getmaxy()-30,getmaxx(),getmaxy());
//BORDE SUPERIOR
bar(20,0,getmaxx()-20,20);
//BORDE MEDIO
bar(20,200,getmaxx()-20,220);
//LINEAS DE CARRETERA
setfillstyle(1,15);
bar(20,330,60,340);
bar(100,330,140,340);
bar(180,330,220,340);
bar(260,330,300,340);
bar(340,330,380,340);
bar(410,330,450,340);
bar(490,330,530,340);
bar(570,330,610,340);
bar(20,100,60,110);
bar(100,100,140,110);
bar(180,100,220,110);
bar(260,100,300,110);
bar(340,100,380,110);
bar(410,100,450,110);
bar(490,100,530,110);
bar(570,100,610,110);
}



void spider(int x,int y)
{
setfillstyle(1,4);
setcolor(4);
fillellipse(x,y,5,5);
line(x-12,y-2,x+12,y-2);
line(x-12,y,x+12,y);
line(x-12,y+2,x+12,y+2);
}
void carz1(int cz1,int cyz1)
{
setfillstyle(9,2);
//DIBUJA CUERPOs DE Los CARROs
bar(cz1,cyz1,cz1+30,cyz1+10);
bar(cz2-100,cyz1,cz2-70,cyz1+10);
bar(cz3-200,cyz1,cz3-170,cyz1+10);
bar(cz4-300,cyz1,cz4-270,cyz1+10);
bar(cz5-400,cyz1,cz5-370,cyz1+10);
bar(cz6-500,cyz1,cz6-470,cyz1+10);
//LLANTAS
bar(cz1+3,cyz1-5,cz1+6,cyz1+15);
bar(cz1+8,cyz1-5,cz1+11,cyz1+15);
bar(cz2-97,cyz1-5,cz2-94,cyz1+15);
bar(cz2-92,cyz1-5,cz2-89,cyz1+15);
bar(cz3-197,cyz1-5,cz3-194,cyz1+15);
bar(cz3-192,cyz1-5,cz3-189,cyz1+15);
bar(cz4-297,cyz1-5,cz4-294,cyz1+15);
bar(cz4-292,cyz1-5,cz4-289,cyz1+15);
bar(cz5-397,cyz1-5,cz5-394,cyz1+15);
bar(cz5-392,cyz1-5,cz5-389,cyz1+15);
}
void carz2(int czz1,int cyz2)
{
setfillstyle(9,5);
bar(czz1,cyz2,czz1+30,cyz2+10);
bar(czz2-100,cyz2,czz2-70,cyz2+10);
bar(czz3-200,cyz2,czz3-170,cyz2+10);
bar(czz4-300,cyz2,czz4-270,cyz2+10);
bar(czz5-400,cyz2,czz5-370,cyz2+10);
bar(czz6-500,cyz2,czz6-470,cyz2+10);
bar(czz1+3,cyz2-5,czz1+6,cyz2+15);
bar(czz1+8,cyz2-5,czz1+11,cyz2+15);
bar(czz2-97,cyz2-5,czz2-94,cyz2+15);
bar(czz2-92,cyz2-5,czz2-89,cyz2+15);
bar(czz3-197,cyz2-5,czz3-194,cyz2+15);
bar(czz3-192,cyz2-5,czz3-189,cyz2+15);
bar(czz4-297,cyz2-5,czz4-294,cyz2+15);
bar(czz4-292,cyz2-5,czz4-289,cyz2+15);
bar(czz5-397,cyz2-5,czz5-394,cyz2+15);
bar(czz5-392,cyz2-5,czz5-389,cyz2+15);
}
void carz3(int zzz1,int cyz3)
{
setfillstyle(9,9);
bar(zzz1,cyz3,zzz1+30,cyz3+10);
bar(zzz2-100,cyz3,zzz2-70,cyz3+10);
bar(zzz3-200,cyz3,zzz3-170,cyz3+10);
bar(zzz4-300,cyz3,zzz4-270,cyz3+10);
bar(zzz5-400,cyz3,zzz5-370,cyz3+10);
bar(zzz6-500,cyz3,zzz6-470,cyz3+10);
bar(zzz1+3,cyz3-5,zzz1+6,cyz3+15);
bar(zzz1+8,cyz3-5,zzz1+11,cyz3+15);
bar(zzz2-97,cyz3-5,zzz2-94,cyz3+15);
bar(zzz2-92,cyz3-5,zzz2-89,cyz3+15);
bar(zzz3-197,cyz3-5,zzz3-194,cyz3+15);
bar(zzz3-192,cyz3-5,zzz3-189,cyz3+15);
bar(zzz4-297,cyz3-5,zzz4-294,cyz3+15);
bar(zzz4-292,cyz3-5,zzz4-289,cyz3+15);
bar(zzz5-397,cyz3-5,zzz5-394,cyz3+15);
bar(zzz5-392,cyz3-5,zzz5-389,cyz3+15);
}

void carz4(int zzzz1,int cyz4)
{
setfillstyle(9,9);
bar(zzzz1,cyz4,zzzz1+30,cyz4+10);
bar(zzzz2-100,cyz4,zzzz2-70,cyz4+10);
bar(zzzz3-200,cyz4,zzzz3-170,cyz4+10);
bar(zzzz4-300,cyz4,zzzz4-270,cyz4+10);
bar(zzzz5-400,cyz4,zzzz5-370,cyz4+10);
bar(zzzz6-500,cyz4,zzzz6-470,cyz4+10);
bar(zzzz1+3,cyz4-5,zzzz1+6,cyz4+15);
bar(zzzz1+8,cyz4-5,zzzz1+11,cyz4+15);
bar(zzzz2-97,cyz4-5,zzzz2-94,cyz4+15);
bar(zzzz2-92,cyz4-5,zzzz2-89,cyz4+15);
bar(zzzz3-197,cyz4-5,zzzz3-194,cyz4+15);
bar(zzzz3-192,cyz4-5,zzzz3-189,cyz4+15);
bar(zzzz4-297,cyz4-5,zzzz4-294,cyz4+15);
bar(zzzz4-292,cyz4-5,zzzz4-289,cyz4+15);
bar(zzzz5-397,cyz4-5,zzzz5-394,cyz4+15);
bar(zzzz5-392,cyz4-5,zzzz5-389,cyz4+15);
}
void card1(int cd1,int cyd1 )
{
setfillstyle(10,2);
//cuerpos
bar(cd1,cyd1,cd1-30,cyd1+10);
bar(cd2,cyd1,cd2-30,cyd1+10);
bar(cd3,cyd1,cd3-30,cyd1+10);
bar(cd4,cyd1,cd4-30,cyd1+10);
bar(cd5,cyd1,cd5-30,cyd1+10);
bar(cd6,cyd1,cd6-30,cyd1+10);

bar(cd1-3,cyd1-5,cd1-6,cyd1+15);
bar(cd1-8,cyd1-5,cd1-11,cyd1+15);
bar(cd2-3,cyd1-5,cd2-6,cyd1+15);
bar(cd2-8,cyd1-5,cd2-11,cyd1+15);
bar(cd3-3,cyd1-5,cd3-6,cyd1+15);
bar(cd3-8,cyd1-5,cd3-11,cyd1+15);
bar(cd4-3,cyd1-5,cd4-6,cyd1+15);
bar(cd4-8,cyd1-5,cd4-11,cyd1+15);
bar(cd5-3,cyd1-5,cd5-6,cyd1+15);
bar(cd5-8,cyd1-5,cd5-11,cyd1+15);
bar(cd6-3,cyd1-5,cd6-6,cyd1+15);
bar(cd6-8,cyd1-5,cd6-11,cyd1+15);
}

void card2(int cdd1,int cyd2 )
{
setfillstyle(6,3);
bar(cdd1,cyd2,cdd1-30,cyd2+10);
bar(cdd2,cyd2,cdd2-30,cyd2+10);
bar(cdd3,cyd2,cdd3-30,cyd2+10);
bar(cdd4,cyd2,cdd4-30,cyd2+10);
bar(cdd5,cyd2,cdd5-30,cyd2+10);
bar(cdd6,cyd2,cdd6-30,cyd2+10);
bar(cdd1-3,cyd2-5,cdd1-6,cyd2+15);
bar(cdd1-8,cyd2-5,cdd1-11,cyd2+15);
bar(cdd2-3,cyd2-5,cdd2-6,cyd2+15);
bar(cdd2-8,cyd2-5,cdd2-11,cyd2+15);
bar(cdd3-3,cyd2-5,cdd3-6,cyd2+15);
bar(cdd3-8,cyd2-5,cdd3-11,cyd2+15);
bar(cdd4-3,cyd2-5,cdd4-6,cyd2+15);
bar(cdd4-8,cyd2-5,cdd4-11,cyd2+15);
bar(cdd5-3,cyd2-5,cdd5-6,cyd2+15);
bar(cdd5-8,cyd2-5,cdd5-11,cyd2+15);
bar(cdd6-3,cyd2-5,cdd6-6,cyd2+15);
bar(cdd6-8,cyd2-5,cdd6-11,cyd2+15);
}
void card3(int ddd1,int cyd3 )
{
setfillstyle(6,3);
bar(ddd1,cyd3,ddd1-30,cyd3+10);
bar(ddd2,cyd3,ddd2-30,cyd3+10);
bar(ddd3,cyd3,ddd3-30,cyd3+10);
bar(ddd4,cyd3,ddd4-30,cyd3+10);
bar(ddd5,cyd3,ddd5-30,cyd3+10);
bar(ddd6,cyd3,ddd6-30,cyd3+10);
bar(ddd1-3,cyd3-5,ddd1-6,cyd3+15);
bar(ddd1-8,cyd3-5,ddd1-11,cyd3+15);
bar(ddd2-3,cyd3-5,ddd2-6,cyd3+15);
bar(ddd2-8,cyd3-5,ddd2-11,cyd3+15);
bar(ddd3-3,cyd3-5,ddd3-6,cyd3+15);
bar(ddd3-8,cyd3-5,ddd3-11,cyd3+15);
bar(ddd4-3,cyd3-5,ddd4-6,cyd3+15);
bar(ddd4-8,cyd3-5,ddd4-11,cyd3+15);
bar(ddd5-3,cyd3-5,ddd5-6,cyd3+15);
bar(ddd5-8,cyd3-5,ddd5-11,cyd3+15);
bar(ddd6-3,cyd3-5,ddd6-6,cyd3+15);
bar(ddd6-8,cyd3-5,ddd6-11,cyd3+15);
}
void card4(int dddd1,int cyd4 )
{
setfillstyle(1,6);
bar(dddd1,cyd4,dddd1-30,cyd4+10);
bar(dddd2,cyd4,dddd2-30,cyd4+10);
bar(dddd3,cyd4,dddd3-30,cyd4+10);
bar(dddd4,cyd4,dddd4-30,cyd4+10);
bar(dddd5,cyd4,dddd5-30,cyd4+10);
bar(dddd6,cyd4,dddd6-30,cyd4+10);
bar(dddd1-3,cyd4-5,dddd1-6,cyd4+15);
bar(dddd1-8,cyd4-5,dddd1-11,cyd4+15);
bar(dddd2-3,cyd4-5,dddd2-6,cyd4+15);
bar(dddd2-8,cyd4-5,dddd2-11,cyd4+15);
bar(dddd3-3,cyd4-5,dddd3-6,cyd4+15);
bar(dddd3-8,cyd4-5,dddd3-11,cyd4+15);
bar(dddd4-3,cyd4-5,dddd4-6,cyd4+15);
bar(dddd4-8,cyd4-5,dddd4-11,cyd4+15);
bar(dddd5-3,cyd4-5,dddd5-6,cyd4+15);
bar(dddd5-8,cyd4-5,dddd5-11,cyd4+15);
bar(dddd6-3,cyd4-5,dddd6-6,cyd4+15);
bar(dddd6-8,cyd4-5,dddd6-11,cyd4+15);
}

void presentacion(void)
{
//getcolor();
//setcolor(WHITE);
//setbkcolor(1);
settextstyle(TRIPLEX_FONT,0,4);
	for(int i=0;i<700;i++)
	{
	delay(1);
	outtextxy(280,450-i,"IORI");
	outtextxy(200,550-i,"ENTRETAIMENT");
	outtextxy(230,650-i,"PRESENTA:");
	cleardevice();
	}
delay(1000);
settextstyle(TRIPLEX_FONT,0,8);
outtextxy(200,150,"ARA¥A");
delay(2000);
cleardevice();
	for(i=0;i<300;i++)
	{
	delay(1);
	outtextxy(200,150+i,"A");
	outtextxy(240,150-i,"R");
	outtextxy(300,150+i,"A");
	outtextxy(350,150-i,"¥");
	outtextxy(380,150+i,"A");
	cleardevice();
	}
cleardevice();
setcolor(4);
settextstyle(TRIPLEX_FONT,0,6);
outtextxy(100,150,"ARE YOU READY?");
delay(2000);
cleardevice();
outtextxy(300,200,"GO!");
delay(2000);
}
void fin (void)
	{
	setcolor(4);
	setbkcolor(0);
	settextstyle(TRIPLEX_FONT,0,4);
	outtextxy(100,50,"G  A  M  E     O  V  E  R");
	delay(2000);
	for(int a=0;a<400;a++)
	{
	delay(5);
	outtextxy(100,50+a,"G");
	outtextxy(140,50+a,"A");
	outtextxy(200,50+a,"M");
	outtextxy(260,50+a,"E");

	outtextxy(350,50+a,"O");
	outtextxy(390,50+a,"V");
	outtextxy(450,50+a,"E");
	outtextxy(510,50+a,"R");
	cleardevice();
	}

	}
