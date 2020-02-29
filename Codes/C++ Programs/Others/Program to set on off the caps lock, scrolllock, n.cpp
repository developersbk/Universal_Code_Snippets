Program to set on off the caps lock, scrolllock, numlock.

	#include"stdio.h"
	#include"conio.h"

	void main()
	{
		char ch;
		char far *memory1=(char far *)0x417;
		char far *memory2=(char far *)0x418;

		clrscr();
		printf("

		  'C' -=:=- CapsLock.");
		printf("
		  'N' -=:=- NumLock.");
		printf("
		  'S' -=:=- ScrollLock.");
		printf("
		<ESC> -=:=- Escape");

		while(1)
		{
			ch=getch();
			if(ch==0x1b)
				break;

			switch(ch)
			{
				case 'c':
				case 'C':
					*memory1=*memory1 ^ 64;
					break;
				case 'n':
				case 'N':
					*memory1=*memory1 ^ 32;
					break;
				case 's':
				case 'S':
					*memory1=*memory1 ^ 16;
					break;
			}
		}
	}
