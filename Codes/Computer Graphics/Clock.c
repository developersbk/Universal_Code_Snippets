#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
time_t t,t1,t2,diff;
int gd,gm,i,j,k,angle,minute,hour;
float b[2][2],a[2][2],c[2][2],e[2][2],f[2][2],g[2][2],h[2][2];
char m[2],hr[2],s[2];
struct time *d,l;
main()
{
    int x,y;
    clrscr();
    initgraph(&gd,&gm," ");
    detectgraph(&gd,&gm);
    x=getmaxx();
    y=getmaxy();
    setcolor(4);
    circle(0.5*x,0.5*y,0.45*y);
    setcolor(13);
    circle(0.5*x,0.5*y,0.455*y);
    setcolor(4);
    circle(0.5*x,0.5*y,0.46*y);
    setcolor(13);
    circle(0.5*x,0.1*y,0.01*y);
    setfillstyle(1,4);
    floodfill(0.5*x,0.1*y,13);
    circle(0.8*x,0.5*y,0.01*y);
    floodfill(0.8*x,0.5*y,13);
    circle(0.5*x,0.9*y,0.01*y);
    floodfill(0.5*x,0.9*y,13);
    circle(0.2*x,0.5*y,0.01*y);
    floodfill(0.2*x,0.5*y,13);
    t2=time(&t);
    gettime(d);
    angle=d->ti_sec*6;
    minute=d->ti_min*6;
    hour=d->ti_hour*30;
    for(hour=d->ti_hour*30;; hour=hour+30)
        {
            g[0][0]=0;
            g[0][1]=0;
            g[1][0]=0;
            g[1][1]=-0.15*y;
            setcolor(0);
            line(h[0][0]+0.5*x,h[0][1]+0.5*y,h[1][0]+0.5*x,h[1][1]+0.5*y);
            b[0][0]=cos(hour*3.142/180);
            b[0][1]=sin(hour*3.142/180);
            b[1][0]=-sin(hour*3.142/180);
            b[1][1]=cos(hour*3.142/180);
            h[0][0]=g[0][0]*b[0][0]+g[0][1]*b[1][0];
            h[0][1]=g[0][0]*b[0][1]+g[0][1]*b[1][1];
            h[1][0]=g[1][0]*b[0][0]+g[1][1]*b[1][0];
            h[1][1]=g[1][0]*b[0][1]+g[1][1]*b[1][1];
            setcolor(4);
            line(h[0][0]+0.5*x,h[0][1]+0.5*y,h[1][0]+0.5*x,h[1][1]+0.5*y);
            for(minute=d->ti_min*6; minute<=359+d->ti_min*6; minute=minute+6)
                {
                    e[0][0]=0;
                    e[0][1]=0;
                    e[1][0]=0;
                    e[1][1]=-0.25*y;
                    setcolor(0);
                    line(f[0][0]+0.5*x,f[0][1]+0.5*y,f[1][0]+0.5*x,f[1][1]+0.5*y);
                    b[0][0]=cos(minute*3.142/180);
                    b[0][1]=sin(minute*3.142/180);
                    b[1][0]=-sin(minute*3.142/180);
                    b[1][1]=cos(minute*3.142/180);
                    f[0][0]=e[0][0]*b[0][0]+e[0][1]*b[1][0];
                    f[0][1]=e[0][0]*b[0][1]+e[0][1]*b[1][1];
                    f[1][0]=e[1][0]*b[0][0]+e[1][1]*b[1][0];
                    f[1][1]=e[1][0]*b[0][1]+e[1][1]*b[1][1];
                    setcolor(4);
                    line(f[0][0]+0.5*x,f[0][1]+0.5*y,f[1][0]+0.5*x,f[1][1]+0.5*y);
                    for(; angle<=360; angle=angle+6)
                        {
                            a[0][0]=0;
                            a[0][1]=0;
                            a[1][0]=0;
                            a[1][1]=-0.35*y;
                            setcolor(0);
                            line(c[0][0]+0.5*x,c[0][1]+0.5*y,c[1][0]+0.5*x,c[1][1]+0.5*y);
                            b[0][0]=cos(angle*3.142/180);
                            b[0][1]=sin(angle*3.142/180);
                            b[1][0]=-sin(angle*3.142/180);
                            b[1][1]=cos(angle*3.142/180);
                            c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
                            c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
                            c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
                            c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
                            setcolor(4);
                            line(c[0][0]+0.5*x,c[0][1]+0.5*y,c[1][0]+0.5*x,c[1][1]+0.5*y);
                            line(f[0][0]+0.5*x,f[0][1]+0.5*y,f[1][0]+0.5*x,f[1][1]+0.5*y);
                            line(h[0][0]+0.5*x,h[0][1]+0.5*y,h[1][0]+0.5*x,h[1][1]+0.5*y);
                            do
                                {
                                    t=time(&t1);
                                    k=difftime(t,t2);
                                }
                            while(k<1);
                            t2=t;
                            gettime(d);
                            itoa(d->ti_hour,hr,10);
                            setviewport(1,1,110,30,0);
                            clearviewport();
                            setviewport(0,0,639,479,0);
                            outtextxy(10,10,hr);
                            itoa(d->ti_min,m,10);
                            outtextxy(50,10,m);
                            itoa(d->ti_sec,s,10);
                            outtextxy(90,10,s);
                            if (kbhit()!=0)
                                {
                                    break;
                                }
                        }
                    angle=0;
                }
            minute = 0;
        }
    getch();
    closegraph();
}



