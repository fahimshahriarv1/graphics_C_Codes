#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    int c=14;
    int xc,yc,R;
    printf("Enter center and radius: ");

    scanf("%d%d%d",&xc,&yc,&R);
    initgraph(&gd,&gm,"");
    int x,y;
    float di;
    di=1-R;
    x=0;
    y=R;
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
        putpixel(xc+x,yc+y,c);
        putpixel(xc-y,yc-x,c);
        putpixel(xc+y,yc-x,c);
        putpixel(xc-y,yc+x,c);
        putpixel(xc+y,yc+x,c);
        putpixel(xc-x,yc-y,c);
        putpixel(xc+x,yc-y,c);
        putpixel(xc-x,yc+y,c);
    }
    getch();
    closegraph();
    return 0;
}
