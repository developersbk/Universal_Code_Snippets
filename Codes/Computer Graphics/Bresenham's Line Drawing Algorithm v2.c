#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void Bresenham_algo(int x,int y,int x1,int y1)
{
    int m,dx,dy,p0,step,i;
    dx=x1-x;
    dy=y1-y;
    m=dy/dx;
    if(abs(dx)>abs(dy))
        step=abs(dx);
    else
        step=abs(dy);
    if(m<1)
        {
            p0=2*dy-dx;
            putpixel(x,y,7);
            while(i!=step)
                {
                    if(p0<0)
                        {
                            x=x+1;
                            putpixel(x,y,7);
                            p0=p0+(2*dy);
                        }
                    else
                        {
                            x=x+1;
                            y=y+1;
                            putpixel(x,y,7);
                            p0=p0+(2*dy)-dx;
                        }
                    i++;
                }
        }
    else
        {
            p0=2*dx-dy;
            putpixel(x,y,7);
            while(i!=step)
                {
                    if(p0<0)
                        {
                            y=y+1;
                            putpixel(x,y,7);
                            p0=p0+(2*dx);
                        }
                    else
                        {
                            x=x+1;
                            y=y+1;
                            putpixel(x,y,7);
                            p0=p0+(2*dx)-dy;
                        }
                    i++;
                }
        }
    getch();
    closegraph();
}

void main()
{
    int x1,y1,Xn,Yn;
    int gdrive=DETECT,gmode;
    clrscr();
    initgraph(&gdrive,&gmode,"C:\\TC\\BGI");
    //setbkcolor(4);
    printf("Enter the starting coordinates of line (x1,y1) ");
    scanf("%d %d",&x1,&y1);
    printf("\nEnter the end coordinates of line (Xn,Yn) ");
    scanf("%d %d",&Xn,&Yn);
    if((x1==Xn)&&(y1==Yn))
        printf("\nGive different coordinates ");
    else
        Bresenham_algo(x1,y1,Xn,Yn);
}