#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<bits/stdc++.h>
using namespace std;
vector <int>X;
vector <int>Y;
void circlePoints(int xc,int yc,int r)
{
    int x,y;
    float di;
    di=1-r;
    x=0;
    y=r;
    while(x<y)
    {
        if(di<0)
        {
            x++;
            di=di+2*x+1;
        }
        else
        {
            x++;
            y--;
            di=di+2*x-2*y+10;
        }
        X.push_back(xc+x);
        Y.push_back(yc+y);
        X.push_back(xc+x);
        Y.push_back(yc+-1*y);
        X.push_back(xc+-1*x);
        Y.push_back(yc+-1*y);
        X.push_back(xc+-1*x);
        Y.push_back(yc+y);
        X.push_back(xc+y);
        Y.push_back(yc+x);
        X.push_back(xc+y);
        Y.push_back(yc+-1*x);
        X.push_back(xc+-1*y);
        Y.push_back(yc+-1*x);
        X.push_back(xc+-1*y);
        Y.push_back(yc+x);

    }
}

main()
{
    int i,j=0,k=0;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    circlePoints(300,240,100);
    circle(300,240,105);
    int ang=0;
    int px=330,py=240;
    int x,y;
    int c=15;
    for(i=0;i<X.size();i++)
    {
        px=X[i];
        py=Y[i];

        if(i==X.size()-1)
            i=0;

        setcolor(0);
        line(300,240,x,y);
        if(px==330)
        {
            for(int ii=335; ii<=400; ii++)
            {
                setcolor(15);
                line(ii,py,ii+10,py);
                x=ii;
                y=py;
                delay(1);
                setcolor(0);
                line(300,240,x,y);
            }
        }
        else if(px==270)
        {
            for(int ii=275; ii>=200; ii--)
            {
                setcolor(15);
                line(ii,py,ii-10,py);
                x=ii;
                y=py;
                delay(1);
                setcolor(0);
                line(300,240,x,y);
            }
        }

        if(py==270)
        {
            for(int ii=275; ii<=335; ii++)
            {
                setcolor(15);
                line(px,ii,px,ii+10);
                x=px;
                y=ii;
                delay(1);
                setcolor(0);
                line(300,240,x,y);
            }
        }
        else if(py==210)
        {

             for(int ii=215; ii>=155; ii--)
            {
                setcolor(15);
                line(px,ii,px,ii-10);
                x=px;
                y=ii;
                delay(1);
                setcolor(0);
                line(300,240,x,y);
            }
        }
        setcolor(15);
        line(300,240,px,py);
        circle(300,240,105);
        x=px;
        y=py;

        delay(1);
    }

    getch();

}
