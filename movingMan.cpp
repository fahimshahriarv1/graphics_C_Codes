#include<stdio.h>
#include<graphics.h>

#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define maxH ScreenHeight*0.60

int ldisp=0;

void drawMan(int x,int lw)
{
//umbrella
    ellipse(x+20, maxH-120, 0, 180, 50, 30);
    line(x-30,maxH-120,x+70,maxH-120);
    line(x+20,maxH-120,x+20,maxH-70);
//head
    circle(x,maxH-90,10);
    line(x,maxH-80,x,maxH-30);
//hand
    line(x,maxH-70,x+10,maxH-60);
    line(x,maxH-65,x+10,maxH-55);
    line(x+10,maxH-60,x+20,maxH-70);
    line(x+10,maxH-55,x+20,maxH-70);
//legs
   line(x,maxH-30,x+lw,maxH);
   line(x,maxH-30,x-lw,maxH);
}

void rainDrops(int x)
{
    int i,rx,ry;
    for(i=0; i<100; i++)
    {
        rx=rand() % ScreenWidth;
        ry=rand() % ScreenHeight;
        if(ry<maxH-4)
        {
            if(ry<maxH-120 || (ry>maxH-120 && (rx<x-20 || rx>x+60)))
                line(rx,ry,rx+0.5,ry+4);
        }
    }
}
main()
{
    int gd=DETECT,gm,x=0,w,wt;
    initgraph(&gd,&gm,"");
    while(1)
    {

        line(0,maxH,ScreenWidth,maxH);
        setcolor(15);
        rainDrops(x);
        if (wt == 1)
            w++;
        else
            w--;
        if (w == 20)
            wt = 0;
        else if (w == -15)
            wt = 1;
        ldisp=(ldisp+2)%20;
        setcolor(6);
        drawMan(x,w);
        delay(50);
        cleardevice();
        x=(x+2)%ScreenWidth;
    }
    getch();
}
