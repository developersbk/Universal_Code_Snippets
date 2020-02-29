Shows the number of wrods and characters entered

#include<iostream.h>
#include<conio.h>

main()
{
  int chcount=0;
  int wdcount=1;
  char ch;

  clrscr();
  cout<<"\n \n This program will count the number of characters and words that u have entered";
  cout<<"\n Type whaterver u like to followed by an enter ....\n\n";

  while ((ch=getche())!='\r')
  {
     if(ch==' ')
	wdcount++;
     else
	chcount++;
  }

  cout<<"\n\n The number of words are : "<<wdcount<<endl;
  cout<<"\n The number of characters are : "<<chcount<<endl;
  getch();
}
