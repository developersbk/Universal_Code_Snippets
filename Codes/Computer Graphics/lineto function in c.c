#include<graphics.h>
#include<conio.h>

main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    moveto(100, 100);
    lineto(200, 200);
    getch();
    closegraph();
    return 0;
}