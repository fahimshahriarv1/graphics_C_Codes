#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int left, top, right, bottom,depth,topflag;


    bar3d(left = 150, top = 250,
          right = 190, bottom = 350,
          depth = 20, topflag = 1);

    bar3d(left = 220, top = 150,
          right = 260, bottom = 350,
          depth = 20, topflag = 2);

    getch();

    closegraph();
}
