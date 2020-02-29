// DDA

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int roundOff(float x)
{
    x=x+0.5;
    return (int)x;
}
void main()
{
    int i,x1,y1,x2,y2,gd=DETECT,gm,step,dx,dy;
    float xin,yin,x,y;
    initgraph(&gd,&gm,"C:/TC/BGI");
    x1=5,y1=5,x2=100,y2=100;
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    step=(dx>dy)?dx:dy;
    xin=(x2-x1)/step;
    yin=(y2-y1)/step;
    putpixel(x1,y1,9);
    x=x1,y=y1;
    for(i=1; i<=step; i++)
        {
            x=x+xin;
            y=y+yin;
            putpixel(roundOff(x),roundOff(y),15);
        }
    getch();
}
