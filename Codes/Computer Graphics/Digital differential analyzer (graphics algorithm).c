#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
void graphfunction(int,int,int,int);
void main()
{
    int x1,y1,Xn,Yn;
    int gdrive=DETECT,gmode;
    clrscr();
    initgraph(&gdrive,&gmode,"C:\\TC\\BGI");
    printf("Enter the starting coordinates of line (x1,y1) ");
    scanf("%d %d",&x1,&y1);
    printf("\nEnter the end coordinates of line (Xn,Yn) ");
    scanf("%d %d",&Xn,&Yn);
    if((x1==Xn)&&(y1==Yn))
        printf("\nGive different coordinates ");
    else
        graphfunction(x1,y1,Xn,Yn);
    getch();
    closegraph();
}
void graphfunction(int x1,int y1,int Xn,int Yn)
{
    float Xi,Yi,Xw,Yw;
    int dx,dy,i,step;
    dx=Xn-x1;
    dy=Yn-y1;
    if(abs(dx)>=abs(dy))
        step=abs(dx);
    else
        step=abs(dy);
    Xi=(Xn-x1)/step;
    Yi=(Yn-y1)/step;
    putpixel(x1,y1,7);
    Xw=x1;
    Yw=y1;
    for(i=1; i<=step; i++)
        {
            Xw=Xw+Xi;
            Yw=Yw+Yi;
            putpixel(floor(Xw),floor(Yw),7);
        }
}
