#include<bits/stdc++.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
using namespace std;
main()
{
    int x=2,y=1,xx=107,yy=104,dx,dy,di;
    float m;
    int i,j,k;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(300,10,300,450);
    line(10,240,630,240);

    //scanf("%f%f%f%f",&x,&y,&xx,&yy);

    if(x>xx||y>yy)
    {
        swap(x,xx);
        swap(y,yy);
    }
    x=x+300;
    xx=xx+300;
    y=y+240;
    yy=yy+240;

    dx=abs(x-xx);
    dy=abs(y-yy);
    di=2*dy-dx;
    while(x<=xx&&y<=yy)
    {
        if(di<0)
        {
            di=di+2*dy;
            x=x+1;
            setcolor(4);
            setfillstyle(SOLID_FILL, 4);
            float x1,y1;
            if(x>300&&y>240)
            {
                x1=x;
                y1=240-(y-240);
            }
            else if(x<300&&y>240)
            {
                x1=300-(300-x);
                y1=240-(y-240);
            }
            else if(x<300&&y<240)
            {
                x1=300-(300-x);
                y1=240+(240-y);
            }
            else if(x>300&&y<240)
            {
                x1=x;
                y1=240+y;
            }
            circle(x1,y1,5);
            floodfill(x1,y1, 4);


        }
        else
        {
            di=di+2*dy-2*dx;
            x++;
            y++;
            setcolor(4);
            setfillstyle(SOLID_FILL, 4);
            float x1,y1;
            if(x>300&&y>240)
            {
                x1=x;
                y1=240-(y-240);
            }
            else if(x<300&&y>240)
            {
                x1=300-(300-x);
                y1=240-(y-240);
            }
            else if(x<300&&y<240)
            {
                x1=300-(300-x);
                y1=240+(240-y);
            }
            else if(x>300&&y<240)
            {
                x1=x;
                y1=240+y;
            }
            circle(x1,y1,5);
            floodfill(x1,y1, 4);

        }
    }


    setcolor(4);
    setfillstyle(SOLID_FILL, 4);
    x=xx;
    y=yy;
    float x1,y1;
    if(x>300&&y>240)
    {
        x1=x;
        y1=240-(y-240);
    }
    else if(x<300&&y>240)
    {
        x1=300-(300-x);
        y1=240-(y-240);
    }
    else if(x<300&&y<240)
    {
        x1=300-(300-x);
        y1=240+y;
    }
    else if(x>300&&y<240)
    {
        x1=x;
        y1=240+y;
    }
    circle(x1,y1,5);
    floodfill(x1,y1, 4);


    getch();
    closegraph();

}

