#include<stdio.h>
#include<graphics.h>
#include<math.h>
main()
{
    float  p;
    int i,gd,gm,x,y;
    int r;
    /* initialise graphics
    ------------------------ */
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");
    /* Read the radius
    ----------------------- */
    printf("Enter the radius of the circle :");
    scanf("%d",&r);
    x=0;
    y=r;
    p = 1.25 - r;
    do
        {
            putpixel(200+x,200+y,15);
            putpixel(200+y,200+x,15);
            putpixel(200+x,200-y,15);
            putpixel(200+y,200-x,15);
            putpixel(200-x,200-y,15);
            putpixel(200-x,200+y,15);
            putpixel(200-y,200+x,15);
            putpixel(200-y,200-x,15);
            if (p < 0)
                {
                    x = x+1;
                    y = y;
                    p = p + 2*x + 2;
                }
            else
                {
                    x= x+1;
                    y= y-1;
                    p = p + 2*(x-y) + 1;
                }
            delay(10000);
        }
    while(x < y);
    getch();
    closegraph();
}