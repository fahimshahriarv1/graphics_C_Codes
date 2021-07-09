#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
#include<conio.h> #include<dos.h> using namespace std;
using namespace std;

void init(int vertex[10][3],int n)
{
    int gd=DETECT,gm,i;
    initgraph(&gd,&gm,"");

    setcolor(10);
    line(0,240,640,240);
    line(320,0,320,480);


    setcolor(3);
    line(450,20,490,20);
    setcolor(15);
    line(450,50,490,50);
    setcolor(6);
    outtextxy(500,20,"Original");
    outtextxy(500,50,"Transformed");

    //drawing the object
    setcolor(3);

    for(int i=0; i<n-1; i++)
    {
        line(320+vertex[i][0],240-vertex[i][1],320+vertex[i+1][0],240-vertex[i+1][1]);
    }
    line(320+vertex[n-1][0],240-vertex[n-1][1],320+vertex[0][0],240-vertex[0][1]);

}

void mul(int mat[3][3],int vertex[10][3],int n)
{
    int i,j,k;    // loop variables

    //array for storing final image matrix
    int res[10][3];


    //multiplying the object matrix with shearing transformation matrix
    for(i=0;i<n;i++)
    {
        for(j=0; j<3; j++)
        {
            res[i][j]=0;
            for(k=0; k<3; k++)
            {
                res[i][j] = res[i][j] + vertex[i][k]*mat[k][j];
            }
        }
    }
    //drawing the transformed image (sheared object)
    setcolor(15);
    for(i=0;i<n-1;i++)
    {
        line(320+res[i][0],240-res[i][1],320+res[i+1][0],240-res[i+1][1]);
    }
    line(320+res[n-1][0],240-res[n-1][1],320+res[0][0],240-res[0][1]);

}
void shear(int vertex[10][3],int n)
{
    int opt;

    //shearing transformation matrix
     int shear_array[3][3];

    //taking user input for shear direction
    cout<<"\n1.x-shear\n2.y-shear\nYour Choice: ";
    cin>>opt;

    //initializing the shearing transformation matrix as per the required direction
    switch(opt)
    {
    case 1:
        int xsh;
        cout<<"\nEnter the x shear : ";
        cin>>xsh;

        //values for X shear
        shear_array[0][0]=1;
        shear_array[1][0]=xsh;
        shear_array[2][0]=0;
        shear_array[0][1]=0;
        shear_array[1][1]=1;
        shear_array[2][1]=0;
        shear_array[0][2]=0;
        shear_array[1][2]=0;
        shear_array[2][2]=1;

        //initializing the graphics mode and drawing the original object
        init(vertex,n);

        //multiplying the object with shearing transformation matrix and displaying the sheared image
        mul(shear_array,vertex,n);
        break;

    case 2:
        int ysh;
        cout<<"\nEnter the y shear : ";
        cin>>ysh;

        //values for Y shear
        shear_array[0][0]=1;
        shear_array[1][0]=0;
        shear_array[2][0]=0;
        shear_array[0][1]=ysh;
        shear_array[1][1]=1;
        shear_array[2][1]=0;
        shear_array[0][2]=0;
        shear_array[1][2]=0;
        shear_array[2][2]=1;

        //initializing the graphics mode and drawing the original object
        init(vertex,n);

        //multiplying the object with shearing transformation matrix and displaying the sheared image
        mul(shear_array,vertex,n);
        break;
    }
}
int main()
{
    int i,x,y;
    int vertex[10][3],n;

    cout<<"\nEnter the no. of vertex : ";
    cin>>n;    for(i=0;i<n;i++)
    {
        cout<<"Enter the points (x,y): ";
        cin>>x>>y;
        vertex[i][0]=x;
        vertex[i][1]=y;
        vertex[i][2]=1;
    }

    shear(vertex,n);

    getch();
    return 0;
}
