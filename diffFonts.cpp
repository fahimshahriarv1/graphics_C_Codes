
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include <dos.h>
#include<dos.h>

main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    for(int i=0; i<=10; i++)
    {
        outtextxy(200,200,"                                                                       ");
        settextstyle(i,0,5);
        outtextxy(200,20+i*50,"Hello");
        delay(300);

    }
    getch();
}
