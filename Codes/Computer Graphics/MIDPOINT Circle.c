#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void circle_midpoint(int,int,int);
void display_circle(int,int,int,int);
void circle_midpoint(int x,int y,int r)
{
    int x1=0,y1=r;
    float p;
    p=(5/4)-r;
    while(x1<=y1)
        {
            if(p<=0)
                {
                    x1=x1+1;
                    p=p+(2*x1)+3;
                }
            else
                {
                    x1=x1+1;
                    y1=y1-1;
                    p=p+2*(x1-y1)+5;
                }
            display_circle(x1,y1,x,y);
        }
}
void display_circle(int x1,int y1,int x,int y)
{
    putpixel(x1+x,y1+y,WHITE);
    putpixel(x1+x,y-y1,WHITE);
    putpixel(x-x1,y1+y,WHITE);
    putpixel(x-x1,y-y1,WHITE);
    putpixel(x+y1,y+x1,WHITE);
    putpixel(x+y1,y-x1,WHITE);
    putpixel(x-y1,y+x1,WHITE);
    putpixel(x-y1,y-x1,WHITE);
}
void main()
{
    int gd=DETECT,gm,x,y,r;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    cleardevice();
    printf("\n\tMid point algo\n");
    printf("Enter the coordinates of circle ");
    scanf("%d%d",&x,&y);
    printf("\nEnter the radius of the circle ");
    scanf("%d",&r);
    circle_midpoint(x,y,r);
    closegraph();
    getch();
}
