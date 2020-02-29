#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
    int gd=DETECT, gm;
    int x, y, x1, x2, y1, y2, delx, dely, e, i, temp;
    clrscr();
    initgraph(&gd, &gm, "C:/TC/BGI");
//Read values from user
    printf("Enter coordinates:\nx1 y1 :");
    scanf("%d %d",&x1, &y1);
    printf("\nx2 y2 :");
    scanf("%d %d",&x2, &y2);
//Calculate delx, dely
    delx = abs(x2-x1);
    dely = abs(y2-y1);
//Initialize starting points
    x = x1;
    y = y1;
    if(dely/delx < 1)
        {
//Calculate e
            e = 2 * dely - delx;
            i=1;
//Plot first pixel
plot:
            putpixel(x,y,WHITE);
            while(e>=0)
                {
                    y++;
                    e = e - 2 * delx;
                }
            x++;
            e = e + 2 * dely;
            i++;
            if(i<=delx)
                goto plot;
        }
    else
        {
//Calculate e
            e = 2 * delx - dely;
            i=1;
//Plot first pixel
            do
                {
                    putpixel(x,y,WHITE);
                    while(e>=0)
                        {
                            x++;
                            e = e - 2 * dely;
                        }
                    y++;
                    e = e + 2 * delx;
                    i++;
                }
            while(i<=dely);
        }
    getch();
}
