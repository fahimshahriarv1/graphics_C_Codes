
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
        drawpoly(i,);
    }
    getch();
}

