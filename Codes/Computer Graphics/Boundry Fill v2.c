#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void boundary(seed_x,seed_y,bound_col,fill_col)
{
    int background_col=BLACK;
    int foreground_col=fill_col;
    if(getpixel(seed_x,seed_y)==background_col&&getpixel(seed_x,seed_y)!=foreground_col)
        {
            putpixel(seed_x, seed_y,foreground_col);
            boundary(seed_x+1,seed_y,bound_col,fill_col);
            boundary(seed_x-1,seed_y,bound_col,fill_col);
            boundary(seed_x, seed_y+1,bound_col,fill_col);
            boundary(seed_x, seed_y-1,bound_col,fill_col);
            boundary(seed_x+1,seed_y+1,bound_col,fill_col);
            boundary(seed_x+1,seed_y-1,bound_col,fill_col);
            boundary(seed_x-1,seed_y+1,bound_col,fill_col);
            boundary(seed_x-1,seed_y-1,bound_col,fill_col);
        }
}
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    rectangle(50,50,100,100);
    boundary(55,55,RED,WHITE);
    getch();
}
