#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    int X[4],Y[4],i;
    double xx,yy,t;
    int gr=DETECT,gm;
    initgraph(&gr,&gm,"");

    printf("Please enter four co-ordinates in the form x y : \n");
    for(i=0; i<4; i++)
    {
        scanf("%d%d",&X[i],&Y[i]);
        setcolor(15);
        circle(X[i],Y[i],3);
        floodfill(X[i],Y[i],15);
    }

    for(t=0.0; t<=1.0; t=t+0.001)
    {
        ///B(t) = (1-t)**3 p0 + 3(1 - t)**2 t P1 + 3(1-t)t**2 P2 + t**3 P3
        xx = pow(1-t,3)*X[0] + 3*t*pow(1-t,2)*X[1] + 3*t*t*(1-t)*X[2] + pow(t,3)*X[3];
        yy =  pow(1-t,3)*Y[0] + 3*t*pow(1-t,2)*Y[1] + 3*t*t*(1-t)*Y[2] + pow(t,3)*Y[3];
        putpixel(xx,yy, 15);
    }
    getch();
    closegraph();
}
