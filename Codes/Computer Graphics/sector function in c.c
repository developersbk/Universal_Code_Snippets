#include <graphics.h>
#include <conio.h>

main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    sector(100, 100, 0, 135, 25, 35);
    getch();
    closegraph();
    return 0;
}