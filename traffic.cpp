#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include <dos.h>
#include<dos.h>

main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int c=6;
    setcolor(c);
    setfillstyle(SOLID_FILL, c);
    rectangle(100,200,200,400);
    floodfill(101,201,c);

    for(int i=0; i<=10; i++)
    {

        if(i==0)
        {
            setcolor(4);
            setfillstyle(SOLID_FILL, 4);
            circle(150,235,30);
            floodfill(150,235, 4);

            setcolor(15);
            setfillstyle(SOLID_FILL, 15);
            circle(150,300,30);
            floodfill(150,300, 15);

            setcolor(15);
            setfillstyle(SOLID_FILL, 15);
            circle(150,365,30);
            floodfill(150,365, 15);
            setcolor(15);
            settextstyle(1,0,20);
            outtextxy(250,250,"Stop");
        }
        if(i==5)
        {
            setcolor(14);
            setfillstyle(SOLID_FILL, 14);
            circle(150,300,30);
            floodfill(150,300, 14);

            setcolor(15);
            setfillstyle(SOLID_FILL, 15);
            circle(150,235,30);
            floodfill(150,235, 15);

            setcolor(15);
            setfillstyle(SOLID_FILL, 15);
            circle(150,365,30);
            floodfill(150,365, 15);
            setcolor(15);
            settextstyle(1,0,20);
            outtextxy(250,250,"                     ");
            outtextxy(250,250,"Ready");
        }
        if(i==10)
        {
            setcolor(2);
            setfillstyle(SOLID_FILL, 2);
            circle(150,365,30);
            floodfill(150,365, 2);

            setcolor(15);
            setfillstyle(SOLID_FILL, 15);
            circle(150,235,30);
            floodfill(150,235, 15);

            setcolor(15);
            setfillstyle(SOLID_FILL, 15);
            circle(150,300,30);
            floodfill(150,300, 15);

            setcolor(15);
            settextstyle(1,0,20);
            outtextxy(250,250,"                     ");
            outtextxy(250,250,"Go");

        }

        delay(300);

    }
    getch();
    closegraph();
}

