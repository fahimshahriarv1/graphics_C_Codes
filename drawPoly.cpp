#include <graphics.h>
#include <conio.h>


int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int p1[]= {10,10,10,100,100,100,100,10,10,10};
    int p2[]= {220,220,220,400,400,400,220,220};
    int p3[]= {120,120,120,150,150,150,150,120,130,100,120,120};

    drawpoly(5, p1);
    drawpoly(4, p2);
    drawpoly(6, p3);

    getch();

    return 0;
}

