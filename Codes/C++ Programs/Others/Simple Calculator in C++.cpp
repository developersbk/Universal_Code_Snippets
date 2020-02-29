Simple Calculator in C++


#include"stdio.h"
#include"conio.h"
#include"dos.h"
#include"stdlib.h"
#include"string.h"

void DISPNUM(char *);
void main()
{
	clrscr();

	_setcursortype(0);
	gotoxy(30,19);
	textcolor(GREEN+BLINK);
	cprintf("SIMPLE CALCULATOR");
	gotoxy(50,21);
	textcolor(BLUE+BLINK);
	cprintf("Hello World");
	getch();
//	clrscr();

	int x=30,y=10;

	textcolor(WHITE);
	gotoxy(x,y);
	cprintf("7    8    9");
	gotoxy(x,y+2);
	cprintf("4    5    6");
	gotoxy(x,y+4);
	cprintf("1    2    3");
	gotoxy(x,y+6);
	cprintf("0");

	textcolor(RED);
	gotoxy(x+5,y+6);
	cprintf(".    =");


	textcolor(GREEN);
	x=x+15;
	gotoxy(x,y);
	cprintf("/");

	gotoxy(x,y+2);
	cprintf("*");

	gotoxy(x,y+4);
	cprintf("-");

	gotoxy(x,y+6);
	cprintf("+");

//Draw The For Calc//
	x=28;y=5;
	gotoxy(x,y);

	textcolor(WHITE);

	//  �	     & 		� //
	cprintf("%c",218);
	gotoxy(28+20,y);
	cprintf("%c",191);
	//  �	     & 		� //

//Horiz. Boundary
	for(x=29;x<=28+19;x++)
	{
		gotoxy(x,y);
		cprintf("%c",196);
		gotoxy(x,y+12);
		cprintf("%c",196);
	}
//End of Horiz. Bound

//  �  		    &           �  //
	cprintf("%c",217);
	x=28;y=y+12;
	gotoxy(x,y);
	cprintf("%c",192);
//End of  �  		    &           �  //

//Vertic. Bound.

	for(y=6;y<=16;y++)
	{
		gotoxy(x,y);
		cprintf("%c",179);
		gotoxy(x+20,y);
		cprintf("%c",179);
	}
//End of Vertic Bou.

	y=6;

	for(x=30;x<=30+16;x++)
	{
		gotoxy(x,y);
		cprintf("%c",196);
		gotoxy(x,y+2);
		cprintf("%c",196);
	}

	gotoxy(30,y+1);
	cprintf("%c               %c",179,179);

	gotoxy(30,y);
	cprintf("%c",218);
	gotoxy(30+16,y);
	cprintf("%c",191);


	gotoxy(30,y+2);
	cprintf("%c",192);
	gotoxy(30+16,y+2);
	cprintf("%c",217);


//End of Vertic Bound.

	//OutPut at X=30,Y=8//


	char ch;
char operand1[15]="",operand2[15]="",BLANK[15]="            ";
	char operator1,first='y';
	long double num1=0,num2=0;
	int i=0,ERROR=0; //Digits
	int MAX=10;
	DISPNUM(0);
	do
	{
		ch=getch();
		if(ch=='x1b')
		{
			for(int i=1000;i>=200;i=i-50)
			{
				sound(i);
				delay(100);
			}
			nosound();
			break;
		}

		//Numeric//
		if((ch>='0')&&(ch<='9'))
		{
			if(i<MAX)
			{
				if(first=='y')
				{
					operand1[i]=ch;
					DISPNUM(operand1);
					i++;
				}
				else
				{
					operand2[i]=ch;
					DISPNUM(operand2);
					i++;
				}
			}
			else		//More than 8 digit
			{
				ERROR=1;
			}
		}
		else if(ch=='.')
		{
			if(first=='y')
			{
				if(strchr(operand1,'.')==NULL)
				{
					operand1[i]=ch;
					i++;
				}
				DISPNUM(operand1);
			}
			else
			{
				if(strchr(operand2,'.')==NULL)
				{
					operand2[i]=ch;
					i++;
				}
				DISPNUM(operand2);
			}
		}
		//Non Numeric
		else if (ch=='*')
		{
			operator1='*';
			first='n';
			i=0;
		}
		else if (ch=='/')
		{
			operator1='/';
			first='n';
			i=0;
		}
		else if (ch=='+')
		{
			operator1='+';
			first='n';
			i=0;
		}
		else if (ch=='-')
		{
			operator1='-';
			first='n';
			i=0;
		}
		else if ((ch=='=')||(ch=='
'))
		{
			//Store in Floating
			if(strcmpi(operand1,BLANK)!=0)
			{
				num1=_atold(operand1);
			}
			if(strcmpi(operand2,BLANK)!=0)
			{
				num2=_atold(operand2);
			}
			//Now Calculate
			switch (operator1)
			{
				case '+':
					num1=num1+num2;
					break;
				case '-':
					num1=num1-num2;
					break;
				case '*':
					num1=num1*num2;
					break;
				case '/':
					num1=num1/num2;
					break;
			}
			//ltoa(num1,operand1,10);
			gcvt(num1,12,operand1);
			DISPNUM(operand1);
			i=0;
			first='y';

			strcpy(operand1,BLANK);
			strcpy(operand2,BLANK);
		}
		else              //Invalid Choice
		{
			ERROR=1;
		}

//Beep On ERROR else ------ //
		if (ERROR==0)
		{
			sound(920);
		}
		else
		{
			sound(100);
			ERROR=0;
		}
		delay(250);
		nosound();

		gotoxy(1,1);
		cprintf("%d",i);

	}while(1);


//	clrscr();
	gotoxy(30,19);
	textcolor(GREEN+BLINK);
	cprintf("SIMPLE CALCULATOR");
	gotoxy(50,21);
	textcolor(BLUE+BLINK);
	cprintf("Hello World");
//	getch();
}
void DISPNUM(char *num)
{
	textbackground(RED);
	gotoxy(31,7);
	cprintf("               ");
	gotoxy(31,7);
	cprintf("%s",num);
}
