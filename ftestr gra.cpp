#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include <dos.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
//    rectangle(50, 100, 100, 50);
//	bar(200, 50, 150, 100);
//    circle(100,200,50);
//    ellipse(300,200,0,360,70,50);
//
//
//	putpixel(350, 99, RED);
//	putpixel(350, 100, RED);
//	line(100,270,400,270);

///bardiag
//	line(100,420,100,60);
//	line(100,420,500,420);
//
//	setfillstyle(LINE_FILL,RED);
//	bar(150,200,200,419);
//
//	setfillstyle(LINE_FILL,GREEN);
//	bar(225,90,275,419);
//
//	setfillstyle(LINE_FILL,BLUE);
//	bar(300,120,350,419);
//
//	setfillstyle(LINE_FILL,YELLOW);
//	bar(375,180,425,419);

///progbar
//settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
//outtextxy(177,180,"Loading, Please Wait...");
//
//	for(int i=190;i<510;i++)
//	{
//		delay(1);
//		line(i,210,i,230);
//	}

///pichart
//	int  mx = getmaxx()/2;
//	int  my = getmaxy()/2;

	//setting fill style in  pie slices
//	setfillstyle(WIDE_DOT_FILL,YELLOW);
//	pieslice(mx, my, 0, 75, 100);
//
//
//	setfillstyle(WIDE_DOT_FILL,BROWN);
//	pieslice(mx, my, 75, 225, 100);
//
//
//	setfillstyle(WIDE_DOT_FILL,BLUE);
//	pieslice(mx, my, 225, 360, 100);

///smily
//    setcolor(YELLOW);
//	circle(300, 100, 40);
//	setfillstyle(SOLID_FILL, YELLOW);
//	floodfill(300, 100, YELLOW);
//
//	setcolor(BLACK);
//	setfillstyle(SOLID_FILL, BLACK);
//
//	fillellipse(310, 85, 2, 6);
//	fillellipse(290, 85, 2, 6);
//
//	ellipse(300, 100, 205, 335, 20, 9);
//	ellipse(300, 100, 205, 335, 20, 10);
//	ellipse(300, 100, 205, 335, 20, 11);
    getch();
    closegraph();
    return 0;
}
