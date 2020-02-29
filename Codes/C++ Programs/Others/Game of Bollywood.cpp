Game of Bollywood

# include<iostream.h>
# include<stdio.h>
# include<conio.h>
# include<string.h>
# include<dos.h>
# include<process.h>
static int cnt=0;
void main()
{
		 clrscr();
		 char film[150],ch,film2[150];
		 int choi,len,res=0,dig=0,j,count=0,len1,flag=1,p;
		 cout<<"Enter 1 For HOLLYWOOD & 2 For BOLLYWOOD ";
		 cin>>choi;
		 cout<<"
ENTER THE NAME OF THE FILM
";
		 gets(film);
		 len=strlen(film);
		 len1=len;
		 clrscr();
		 flushall();
		 gotoxy(15,10);
		 if(choi==1)
		 		 cout<<"HOLLYWOOD
";
		 else
		 		 cout<<"BOLLYWOOD
";
		 for(int i=0;i<len1;i++)
		 {
		 		 gotoxy(15+i,12);
		 		 switch(film[i])
		 		 {
		 		 		 case 'a':cout<<"a";len--;film2[cnt]='a';cnt++;break;
		 		 		 case 'e':cout<<"e";len--;film2[cnt]='e';cnt++;break;
		 		 		 case 'i':cout<<"i";len--;film2[cnt]='i';cnt++;break;
		 		 		 case 'o':cout<<"o";len--;film2[cnt]='o';cnt++;break;
		 		 		 case 'u':cout<<"u";len--;film2[cnt]='u';cnt++;break;
		 		 		 case '.':cout<<".";len--;break;
		 		 		 case ' ':cout<<" ";len--;break;
		 		 		 default:cout<<"_";
		 		 }
		 }
		 gotoxy(15,15);
		 cout<<"Now Guess The Film ";
		 while(flag==1)
		 {
		 		 p=0;
		 		 dig=0;
		 		 gotoxy(37,15);
		 		 cin>>ch;
		 		 film2[cnt]=ch;
		 		 if(cnt>=1)
		 		 {
		 		 		 for(int k=0;k<cnt;k++)
		 		 		 {
		 		 		 		 if(film2[k]==ch)
		 		 		 		 p=1;
		 		 		 }
		 		 }
		 		 cnt++;
		 		 for(j=0;j<len1;j++)
		 		 {
		 		 		 if(film[j]==ch)
		 		 		 {
		 		 		 		 dig++;
		 		 		 		 count++;
		 		 		 		 if(p==1)
		 		 		 		 {
		 		 		 		 		 count--;
		 		 		 		 }
		 		 		 		 gotoxy((15+j),12);
		 		 		 		 cout<<ch;
		 		 		 		 if(count==len)
		 		 		 		 {
		 		 		 		 		 gotoxy(15,17);
		 		 		 		 		 cout<<"CONGRATS YOU WON! BY "<<(9-res)<<" POINTS";
		 		 		 		 		 getch();
		 		 		 		 		 exit(0);
		 		 		 		 }
		 		 		 }
		 		 }
		 		 if(dig==0)
		 		 {
		 		 		  if(p==1)
		 		 		  {res--;}
		 		 		  gotoxy((15+res),10);
		 		 		  cout<<ch;
		 		 		  res++;
		 		 		   if(res==9)
		 		 		   {
		 		 		 		 flag=0;
		 		 		 		 gotoxy(15,17);
		 		 		 		 cout<<"SORRY YOU LOST THE NAME OF FILM WAS "<<film;
		 		 		 		  getch();
		 		 		   }
		 		 }
		 }
}
