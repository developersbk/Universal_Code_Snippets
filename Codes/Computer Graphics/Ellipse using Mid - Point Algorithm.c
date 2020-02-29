//Ellipse using Mid - Point Algorithm
#include <stdio.h>
#include <graphics.h>
void ellipseMidpoint(float xc, float yc, float rx, float ry)
{
    void drawEllipse(float, float, float, float);
    float x = 0, y = ry, p;
    float px = 0, py = 2 * rx * rx * y;
    drawEllipse(xc, yc, x, y);
//Region 1
    p = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx);
    while (px < py)
        {
            x++;
            px = px + 2 * (ry * ry);
            if (p < 0)
                p = p + (ry * ry) + px;
            else
                {
                    y--;
                    py = py - 2 * rx * rx;
                    p = p +( ry * ry )+ px - py;
                }
            drawEllipse(xc, yc, x, y);
        }
//Region 2
    p = (ry * ry)*(x+0.5)*(x+0.5) + rx * rx*(y-1)*(y-1) - (rx * rx)*(ry * ry);
    while (y > 0)
        {
            y--;
            py = py - 2 * rx * rx;
            if (p > 0)
                p = p + rx * rx - py;
            else
                {
                    x++;
                    px = px + 2 * (ry * ry);
                    p = p + rx * rx - py + px;
                }
            drawEllipse(xc, yc, x, y);
        }
}
void drawEllipse(float xc, float yc, float x, float y)
{
    putpixel(xc+x, yc+y, WHITE);
    putpixel(xc-x, yc+y, WHITE);
    putpixel(xc+x, yc-y, WHITE);
    putpixel(xc-x, yc-y, WHITE);
}

void main()
{
    float xc, yc, rx, ry;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("\nEnter the center coordinates of ellipse: ");
    scanf("%f %f", &xc, &yc);
    printf("\nEnter x-radius coordinate: ");
    scanf("%f", &rx);
    printf("\nEnter y-radius coordiante: ");
    scanf("%f", &ry);
    ellipseMidpoint(xc, yc, rx, ry);
    getch();
}
