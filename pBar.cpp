#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include <dos.h>

main()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(177,180,"Loading, Please Wait...");

	for(int i=190;i<510;i++)
	{
		delay(1);
		line(i,210,i,230);
	}
	 outtextxy(177,180,"                                        ");
	outtextxy(210,180,"Done.");

	getch();
}
