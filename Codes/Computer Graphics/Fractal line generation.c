//Fractal line generation


#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int gdriver,maxx,maxy;
int gmode,c,nn;
float xs=0,ys=0;

/* Random number generation
--------------------------------*/
float r()
{
    float rr;
    float d=32767;
    rr = rand()/d;
    return(rr);
}

/* Calculation the Gaussian variable
-------------------------------------*/
float rg()

{
    float gauss;
    int j;
    gauss=0;
    for(j=0; j<7; j++)
        {
            gauss = gauss +r()-r();
            return(gauss);
        }
}
/*--------------------------------------------------*/
sub(float x1,float y1,float x2,float y2,float s,int n)

{
    float xmid,ymid;
    if(n==0)
        {
            line(x1,y1,x2,y2);
        }
    else
        {
            xmid =(x1+x2)/2 + s * rg();
            ymid =(y1+y2)/2 + s * rg();
            s=s/2;
            n=n-1;
            sub(x1,y1,xmid,ymid,s,n);
            sub(xmid,ymid,x2,y2,s,n);
        }
}
/*--------------------------------------------------*/
fsub(float xs,float ys,float x,float y,float ww,int n)
{
    float l;
    l= sqrt(pow((xs-x),2) + pow((ys-y),2));
    sub(xs,ys,x,y,l*ww,n);
    xs=x;
    ys=y;
}

/* Initialise of graphics mode
--------------------------------------------------*/
void igraph()
{
    detectgraph(&gdriver,&gmode);
    if(gdriver < 0)
        {
            puts("Cannot detect a graphics card");
            exit(1);
        }
    initgraph(&gdriver, &gmode," ");
}
main()
{
    int i,x1,x2,y1,y2,it;
    float ii,w;
    printf("Enter x1 :");
    scanf("%d",&x1);
    printf("Enter y1 :");
    scanf("%d",&y1);
    printf("Enter x2 :");
    scanf("%d",&x2);
    printf("Enter y2 :");
    scanf("%d",&y2);
    printf("Enter waiting function W :");
    scanf("%f",&w);
    printf("Enter number of iterations :");
    scanf("%d",&it);
    igraph();
    maxy=getmaxy();
    maxx=getmaxx();
    setcolor(15);
    fsub(x1,y1,x2,y2,w,it);
    getch();
    closegraph();
}

