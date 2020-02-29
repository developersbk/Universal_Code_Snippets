Just arrange box from 1-15, teasing your brain


Code :

#include<graphics.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<bios.h>
#include<stdio.h>

#define L 75
#define R 77
#define U 72
#define D 80

     #define __LARGE__
	int getboxpos();
	 int  check_box();
		    void  quit(void) ;
    int  finish(void);

   int x,y,d,locx,locy;
     int	tboxx[]={50,80,110,140,50,80,140,140,50,80,110,110,50,80,140};
     int
tboxy[]={200,200,200,200,235,235,235,270,270,270,305,270,305,305,305};
       int  
winx[]={50,80,110,140,50,80,110,140,50,80,110,140,50,80,110};
       int
winy[]={200,200,200,200,235,235,235,235,270,270,270,270,305,305,305};
       int Vx[]={50,50,50,50,80,80,80,80,110,110,110,110,140,140,140};
       int Vy[]={200,235,270,305, 200,235,270,305, 200,235,270,305,
200,235,270};
	     struct BOX{
       int boxx,boxy;
	void *box; }b[15];
	      int empty_x=110;
	     int empty_y=235;
		     int play=0;
		    char arrange;
		    void display(void)
	   {           cleardevice();
	    for(int q=0;q<15;q++)
		 putimage(b[q].boxx,b[q].boxy,b[q].box,1);
			 gotoxy(10,2);printf("Arrangement Range :[1 - %2d]",play);
		       if(arrange=='h'){	 gotoxy(10,3);printf("Arrangement Style
:Horizontal");}
		  else  {	 gotoxy(10,3);printf("Arrangement Style :Vertical");}
			     }

void main(void)
{        char st[2];
   for(int q=0;q<15;q++)
   b[q].boxx=b[q].boxy=NULL;
 int driver=DETECT,mode;
     int deck_color=0,no_color=0;
	     clrscr();
	  dd:  gotoxy(10,5);
	   printf("Deck Color :");
	   scanf("%d",&deck_color);
	      gotoxy(10,6);
	      printf("No. Color :");
	      scanf("%d",&no_color);
	     printf("Arrangement Range upto:[4,8,10,12,15]");
	     scanf("%d",&play);
	      printf("Arrangement Style :[H]orizontal,[V]ertical");
	      arrange=getche();
	    if(deck_color==0 )goto dd;
	   else if(no_color==deck_color)goto dd;
	       if(play>15 || play<1)play=10;
	       if(arrange!='h' && arrange!='v')arrange='h';
	       initgraph(&driver,&mode,"");
 settextstyle(1,0,1);

	      for(int j=0;j<15;j++)
	    {     cleardevice();
	    setcolor(deck_color);
	    for(int i=1;i<=25;i++)
 rectangle(0,0,i,i);
	    itoa(j+1,st,10);
	setcolor(no_color);
	    outtextxy(5,2,st);
	b[j].box=  malloc(imagesize(0,0,25,25));
getimage(0,0,25,25,b[j].box);
}          cleardevice();
  setlinestyle(SOLID_LINE,1,3);
setcolor(4);
rectangle(0,0,28,28);
void	*select=  malloc(imagesize(0,0,28,28));
getimage(0,0,28,28,select);

	 randomize();
	 for(q=0;q<15;q++)
	     { aa:	int s=rand()%16;
		   if(b[s].boxx==NULL){b[s].boxx=tboxx[q];
				     b[s].boxy=tboxy[q];
				     }
		else goto aa;
	      }
			  locx=x=50;locy=y=200;
		 display();
		 putimage(x,y,select,1);
		 char ch;

	     while(1)
	      {  int key=bioskey(2);
		if((key & 0x40) && (key & 0x20))quit();
	       int	ans= finish();
	gotoxy(10,24);printf("Remaining :%2d",ans);

		 if(!ans){  getch ();quit(); }

	      xx: ch=NULL;
	      while(ch!=13){
	      ch=getch();


	      switch (ch)
	      {case L:x-=30;break;
		case R:x+=30;break;
		case D:y+=35;break;
		case U:y-=35;break;
		}
	if(x>140)x=50;if(y>305)y=200;
	if(x<50)x=140;if(y<200)y=305;
	putimage(locx,locy,select,1);
		d= getboxpos();
			putimage(locx,locy,select,1);
		     }
		 if(!check_box())goto xx;
		 putimage(locx,locy,b[d].box,1);
		putimage(empty_x,empty_y,b[d].box,1);
		b[d].boxx=empty_x;b[d].boxy=empty_y;
		empty_x=locx; empty_y=locy;
		}


}
/*~~~~~~~~~~~~~~~~~~~~~Subroutines~~~~~~~~~~~~~*/

int getboxpos()
	{
	   for(int a=0;a<15;a++)
	   {  if(x>=b[a].boxx && x<=b[a].boxx+25) {locx=b[a].boxx;break;}
	      else continue;
	      }

	      for(a=0;a<15;a++)
	   {  if(y>=b[a].boxy && y<=b[a].boxy+25) {locy=b[a].boxy;break;}
	      else continue;
	      }
	     for(a=0;a<15;a++)
	   {  if(locx==b[a].boxx && locy==b[a].boxy)return a;
	     else continue;
	   }
	   return 0;
	   }
	   int  check_box()
	     {
		   if(abs(locx-empty_x)==30 && abs(locy-empty_y)==0)
		   {
	      gotoxy(60,12);	 printf("                  ");

	     return 1; }
		else if(abs(locx-empty_x)==0 && abs(locy-empty_y)==35)
				   {
	      gotoxy(40,16);	 printf("                  ");

	     return 1; }

		   else
		   {
	      gotoxy(40,16);	 printf("Invalid Selection.");

	      }
	      return 0;
	      }
	    void  quit(void) {

		   closegraph();
    restorecrtmode();
    printf("



	Hoped you Enjoyed !");
if(play!=15)	   printf("

Try arranging other ranges.");
      exit(0);
      }
    int  finish(void)
    {  if(arrange=='h'){ for(int t=0;t<play;t++)
	 { if(b[t].boxx!=winx[t] || b[t].boxy!=winy[t]) return (play-t);
	  else
	  continue;
	  }           }
	else {
			for(int t=0;t<play;t++)
	 { if(b[t].boxx!=Vx[t] || b[t].boxy!=Vy[t]) return (play-t);
	  else
	  continue;
	  }           }
       return 0;
       }


