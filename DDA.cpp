#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
main()
{
    float x=14,y=15,xx=96,yy=87,dx,dy,m;
    int i,j,k;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(300,10,300,450);
    line(10,240,630,240);

    //scanf("%f%f%f%f",&x,&y,&xx,&yy);
    x=x+300;
    xx=xx+300;
    y=y+240;
    yy=yy+240;

    dx=x-xx;
    dy=y-yy;
    m=dy/dx;

    if(m<1)
    {
        int t;
        if(abs(x-xx)>abs(y-yy))
            t=(int)abs(x-xx);
        else
            t=(int)abs(y-yy);
        for(i=1; i<=t+1; i++)
        {
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

            x=x+1;
            y=m+y;
        }
    }
    else if(m==0)
    {
        int t;
        if(abs(x-xx)>abs(y-yy))
            t=(int)abs(x-xx);
        else
            t=(int)abs(y-yy);
        for(i=1; i<=t+1; i++)
        {
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
                y1=240+(240-y);
            }
            circle(x1,y1,5);
            floodfill(x1,y1, 4);

            x=x+1;
            y=y+1;
        }
    }
    else
    {
        int t;
        if(abs(x-xx)>abs(y-yy))
            t=(int)abs(x-xx);
        else
            t=(int)abs(y-yy);
        for(i=1; i<=t+1; i++)
        {
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
                y1=240+(240-y);
            }
            circle(x1,y1,5);
            floodfill(x1,y1, 4);

            x=x+1/m;
            y=y+1;
        }
    }
    float x1,y1;
    x=xx;
    y=yy;
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

    setcolor(4);
    setfillstyle(SOLID_FILL, 4);
    circle(x1,y1,5);
    floodfill(x1,y1, 4);

    getch();
    closegraph();

}
