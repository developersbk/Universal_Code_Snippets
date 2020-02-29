#include <graphics.h>
#include <conio.h>

main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    arc(100, 100, 0, 135, 50);
    getch();
    closegraph();
    return 0;
}

// In the above program (100,100) are coordinates of center of arc, 0 is the starting angle, 135 is the end angle and 50 specifies the radius of the arc.