#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include <dos.h>

main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int c=14;
    setcolor(c);
	circle(300, 300, 40);

	setfillstyle(SOLID_FILL, c);
	floodfill(300, 300, c);

        int d=12;
        setcolor(d);
        setfillstyle(SOLID_FILL,d);
        ///dimples
        circle(275,295,7);
        circle(325,295,7);
        floodfill(275, 295, d);
        floodfill(325, 295, d);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,1);
        ///eyes
        ellipse(310, 285,0,175,4, 5);
        ellipse(310, 285,0,175,4, 6);
        ellipse(290, 285,0,175, 4, 5);
        ellipse(290, 285,0,175, 4, 6);
        ///smile
        ellipse(300, 300, 205, 335, 20, 19);
        ellipse(300, 300, 205, 335, 20, 20);
        int t=RED;
        setcolor(t);
        setfillstyle(SOLID_FILL, t);
        ///tongue
        for(int i=0; i<11; i++)
            ellipse(310, 315, 200, 0, 5, i);
        getch();
}
