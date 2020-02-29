/* PROGRAM FOR POLYGON FILING USING EDGEFILL */

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void drawply();
void edgefill(int x1, int x2, int y1, int y2);
main()
{
    int gd=DETECT,gm,x,y,p[8],x1,x2,y1,y2;
    /* Initialise graphics mode
    ---------------------------------- */
    initgraph(&gd,&gm," ");
    cleardevice();
    drawply();
    getch();
    x1=300;
    x2=371;
    y1=240;
    y2=170;
    while(x1!=x2&&y1!=y2)
        {
            x1++;
            x2--;
            y1--;
            y2++;
            edgefill(x1,x2,y1,y2);
        }
    outtextxy(300,50,"Edge fill");
    getch();
    closegraph();
    return(0);
}


/* FUNCTION TO DRAW A POLYGON
---------------------------------*/

void drawply()
{
    setcolor (RED);
    line(300,240,371,240);
    line(371,240,371,170);
    line(371,170,300,170);
    line(300,170,300,240);
}

/* FUNCTION TO FILL POLYGON USING EDGEFILL ALGORITHM
-------------------------------------------------------*/
void edgefill(int x1, int x2, int y1, int y2)
{
    int i;
    for(i=x2; i>=x1; i--)
        {
            putpixel(i,y1,RED);
            delay(5);
        }
    for(i=y1; i>=y2; i--)
        {
            putpixel(x1,i,RED);
            delay(5);
        }
    for(i=x1; i<=x2; i++)
        {
            putpixel(i,y2,RED);
            delay(5);
        }
    for(i=y2; i<=y1; i++)
        {
            putpixel(x2,i,RED);
            delay(5);
        }
}
