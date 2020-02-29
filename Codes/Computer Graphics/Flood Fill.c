#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void flood_fill(x,y,fill_col,in_col)
{
    if(getpixel(x,y)==in_col&&getpixel(x,y)!=fill_col)
        {
            putpixel(x,y,fill_col);
            flood_fill(x+1,y,fill_col,in_col);
            flood_fill(x-1,y,fill_col,in_col);
            flood_fill(x,y+1,fill_col,in_col);
            flood_fill(x,y-1,fill_col,in_col);
        }
}
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:/TC/BGI");
    rectangle(50,50,100,100);
    flood_fill(55,55,WHITE,BLACK);
    getch();
}
