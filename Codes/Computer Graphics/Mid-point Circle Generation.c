//Midpoint Circle

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd=DETECT, gm;
    int x,y,xc,yc,r;
    float Pk;
    initgraph(&gd,&gm,"C:/TC/BGI");
//Accept from user
    printf("Enter center for circle (xc,yc) : ");
    scanf("%d%d",&xc,&yc);
    printf("Enter radius : ");
    scanf("%d",&r);
//Plot first point
    x=0,y=r;
    Pk= 1.25 - r;
    do
        {
            putpixel(xc+x,yc+y,15);
            putpixel(xc+y,yc+x,15);
            putpixel(xc+x,yc-y,15);
            putpixel(xc-y,yc+x,15);
            putpixel(xc-x,yc+y,15);
            putpixel(xc+y,yc-x,15);
            putpixel(xc-x,yc-y,15);
            putpixel(xc-y,yc-x,15);
            if(Pk<0)
                {
                    Pk+=2*x+3;
                }
            else
                {
                    Pk+=2*(x-y)+5;
                    y--;
                }
            x++;
        }
    while(x<y);
    getch();
}
OUTPUT: