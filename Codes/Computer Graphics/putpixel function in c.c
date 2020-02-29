#include<graphics.h>
#include<conio.h>

main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    putpixel(25, 25, RED);
    getch();
    closegraph();
    return 0;
}


// Output of this program will be a RED pixel on screen at (25, 25) . Try to spot that pixel with your eyes at left top portion of your computer screen.