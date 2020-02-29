Movement of variables in Stack wihout any graphics

Code :
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
void hori(int,int);
void para(int,int);
void vert(int,int);
static int x=3,y=15;
char ch;
void main()
{   clrscr();
    cout <<"
enter a character and see the path	";
  cin >>ch;
      gotoxy(x,y);
      x++;
      cout<<ch;
    hori(x,y);

     getch();

}

				 /*   horizontal path  */
	   void hori(int x,int y)
	  {
//x=4,y=15
		 for(;x<=30;x++)
		 {  gotoxy(x,y);
		 delay(100);
		   cout<<" "<<ch;
		  }
//x=31,y=15
		para(x,y);
	  }


				 /*parabolic path*/
	    void para(int x,int y)
	  {
 //x31,y15
 // a,b for erasing previous print
		  int a=0,b=0;
		 for(;x<=50&&y<=30;x++,y++)
	     {	  a=x,b=y ;
		  gotoxy(x,y);
		 delay(100);
		 cout<<ch;
		 gotoxy(a,b);
		 delay(200);
		 cout<<" ";
	     }
// last values for a=49 b=29
		gotoxy(a+1,b+1);
		  delay(200);
		  cout<<" ";
//x51y31
		 vert(x,y);
	}




				/*vertical path*/

	  void vert(int x,int y)
	{
 //x51y31
	 int a=0;
	 for(;y<=40;y++)
	 {
 //a for erasing previous print
 //initial a=30
	   a=y;
	  gotoxy(x,y);  //(51,31 )
	 delay(200);
	 cout<<ch;
	 gotoxy(x,a);   //(51,30)
	 delay(200);
	 cout<<" ";
	 a++;
	  }

	  //x51y51

	  gotoxy(x,y);
	  cout<<ch;
    }   //exit at x y


