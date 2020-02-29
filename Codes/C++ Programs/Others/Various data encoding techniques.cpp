Various data encoding techniques

Code :

# include <graphics.h>
# include <iostream.h>
# include <conio.h>
# include <string.h>
# include <dos.h>

int main(void)
{
   void drawgrid(int, int, int, int);
   void encode(char *,char *, int, int, int, int);
   void draw(int ,int ,char *, int);

   char *message;
   int len;

   clrscr();
   cout << "
DIGITAL ENCODING TECHNIQUES";
   cout << "


Enter the data to be encoded (max 24 bits) : ";

   do{
   cin >> message;
   len = strlen(message);
   if(len>24)
     cout << "Message is greater than 12 bits, please type new message: 
";
   }while(len>24);

   char *o_mess =new char[len];
   char *e_mess =new char[len*2];
   strcpy(o_mess,message);

   int gd=DETECT, gm, i, x, y;

   initgraph(&gd,&gm,"..\BGI");
   setcolor(8);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(100,10,"DIGITAL ENCODING TECHNIQUES");
   setcolor(YELLOW);
   rectangle(0,30,630,450);
   rectangle(1,31,629,449);
   setcolor(WHITE);
   settextstyle(DEFAULT_FONT,0,0);
   drawgrid(120,60,len,20);
   outtextxy(10,50, "Message");

   x= 137;
   for(i=0; i<len; i++, x+=20)
   {
     if(o_mess[i]=='1')
	outtextxy(x,50,"1");
     else
	outtextxy(x,50,"0");
   }

   x=120;
   y=80;
   outtextxy(10,100, "NRZ - L");
   encode(o_mess,e_mess,len,0,2,0);
   draw(x,y,e_mess,len*2);
   y+=60;

   outtextxy(10,160, "NRZ - I");
   encode(o_mess,e_mess,len,3,4,0);
   draw(x,y,e_mess,len*2);
   y+=60;

   outtextxy(10,220, "Bipolar AMI");
   encode(o_mess,e_mess,len,3,1,0);
   draw(x,y,e_mess,len*2);
   y+=60;

   outtextxy(10,280, "Pseudo Tenary");
   encode(o_mess,e_mess,len,4,3,0);
   draw(x,y,e_mess,len*2);
   y+=60;

   outtextxy(10,340, "Manchester");
   encode(o_mess,e_mess,len,0,2,1);
   draw(x,y,e_mess,len*2);
   y+=60;

   outtextxy(10,400, "D-Manchester");
   encode(o_mess,e_mess,len,4,3,1);
   draw(x,y,e_mess,len*2);
   y+=60;

   getch();
   closegraph();

   return 0;
}

void drawgrid(int x, int y, int pulses, int width)
{
   line(x,y,x+(pulses*width),y);
   line(x,y,x,y+(width*12+150));

   for(int i=0; i<pulses; i++)
   {
      setcolor(LIGHTBLUE);
      line(x+width,y+1,x+width,y+(width*12+150));
      setcolor(BLUE);
      line(x+width/2,y+1,x+width/2,y+(width*12+150));
      x+=width;
   }
   setcolor(WHITE);

   return;
}

void draw(int x, int y, char *data, int len)
{
   int prev_y, curr_y;

   prev_y = y;

   for(int i=0; i<len; i++, x+=10)
   {
       if(data[i]=='2')
	  curr_y = y;
       if(data[i]=='1')
	  curr_y = y+20;
       if(data[i]=='0')
	  curr_y = y+40;


       line(x,curr_y,x+10,curr_y);
       sound(70);
       delay(50);
       nosound();

       if(prev_y != curr_y)
	  line(x,prev_y,x,curr_y);
	  sound(170);
	  delay(50);
	  nosound();

       prev_y = curr_y;
      delay(10);
   }
   return;
}

void encode(char *o_mess,char *e_mess,int len,int one,int zero, int 
mid)
{
   int i, j, previous=2;

   for(i=0, j=0; i<len; i++, j+=2)
   {
      if(o_mess[i]=='1')
      {
	 if(one==0)
	    e_mess[j]='0';
	 if(one==1)
	    e_mess[j]='1';
	 if(one==2)
	    e_mess[j]='2';
	 if(one==3)
	 {
	   if(previous==2)
	   {
	     previous=0;
	     e_mess[j]='0';
	   }
	   else
	   {
	     previous=2;
	     e_mess[j]='2';
	   }
	 }
	 if(one==4)
	 {
	   if(previous==2)
	     e_mess[j]='2';
	   else
	     e_mess[j]='0';
	 }
      }
      else
      {
	 if(zero==0)
	    e_mess[j]='0';
	 if(zero==1)
	    e_mess[j]='1';
	 if(zero==2)
	    e_mess[j]='2';
	 if(zero==3)
	 {
	   if(previous==2)
	   {
	     previous=0;
	     e_mess[j]='0';
	   }
	   else
	   {
	     previous=2;
	     e_mess[j]='2';
	   }
	 }
	 if(zero==4)
	 {
	   if(previous==2)
	     e_mess[j]='2';
	   else
	     e_mess[j]='0';
	 }
      }
      if(mid==1)
      {
	 if(e_mess[j]=='2')
	     e_mess[j+1]='0';
	 else
	     e_mess[j+1]='2';
	 if(previous==2)
	    previous=0;
	 else
	    previous=2;
      }
      else
	e_mess[j+1]=e_mess[j];
   }
   return;
}
