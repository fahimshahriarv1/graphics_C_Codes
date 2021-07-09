
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include <dos.h>
#include<dos.h>

main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int c=9;
    rectangle(100,100,300,300);
    int f=0;
    for(int i=101;i<300;i++)
    {
        for(int j=101;j<300;j++)
        {
            putpixel(j,i,c);
            //delay(.7);
        }
        if(i%50==0)
        {
            c++;
        }
    }

        getch();
}
