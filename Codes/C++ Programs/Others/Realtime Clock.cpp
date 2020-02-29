Realtime Clock

#include<stdio.h>
#include<dos.h>
main()
 {
   int c,hr=1;
   union REGS in;
   clrscr();

  while(!kbhit())
	{
	in.h.ah=0x02;
	int86(0x1a,&in,&in);
	clrscr();
	hr=1;
	printf("\n\n\n\t");
	fun(in.h.ch , hr);
	printf(":");
	hr=0;
	fun(in.h.cl,hr);
	printf(":");
	fun(in.h.dh,hr);
	delay(250);
	}

 }


fun(int a,int j)
  {
    int i,k;
	i=a;
	a&=0x0f;
	i&= 0xf0;
	i>>=4;
       /*	if(j==0)*/
	printf("%d%d",i,a);
/*	else
	{
	i=i<<4;
	i=i|a;
	i-=0x0c;
	printf("%d",i-6);
	}*/
    }
