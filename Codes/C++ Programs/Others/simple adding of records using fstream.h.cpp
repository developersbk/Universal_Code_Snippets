simple adding of records using fstream.h

#include<fstream.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

add();
main()
{
ifstream input_stream("rec.dat");
char p[30],ch,c;
int x,num;
clrscr();
	cout<<"[A]dd record "<<endl;
	cout<<"[S]earch record "<<endl;
	cout<<"[E]xit "<<endl;
	ch=getche();
	switch(toupper(ch))
	{
	case 'A':
			clrscr();
			add();
			break;
	case 'S':
			clrscr();
			cout<<"
Enter record number:";
			cin>>num;
			for(x=1;x<=num;x++)
			{
			input_stream>>x;
			input_stream>>p;
			}
			cout<<"Record number: "<<num<<endl;
			cout<<"Name: "<<p<<endl;
			break;
	case 'E':
			return 0;
      }
      input_stream.close();

getch();
return 0;
}

add()
{
char n[30],c;
int y=0;
ofstream out_stream("rec.dat");
	do{
	   cout<<"
Enter name:";
	   cin>>n;
	   {
	   y++;
	   }
	   out_stream<<y<<endl;
	   out_stream<<n<<endl;
	   cout<<"Enter another file again? [y/n]: ";
	   c=getche();
	   }while(c!='n');
out_stream.close();
getch();
return 0;
}
