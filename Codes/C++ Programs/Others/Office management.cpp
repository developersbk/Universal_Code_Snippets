Office management

It is a simple project made in c++,it has not got ny type of
graphics as simple as stick so plz try and use the software in ur
office frontier to ad or modify or delete the employyers details
try once.......... give me ur reply on my email 

#include<DOS.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int count =0;
class emp
{
char name[40];
char jobdeg[40],phno[20];
float salary,srno;
public:
void getdata(void);
void display(void);
void mod_data();
};
void emp::getdata(void)
{
char ch;
cin.get(ch);
clrscr();
gotoxy(15,10);
cout<<"Add student data
";
gotoxy(17,12);
cout<<"Record #"<<(++count)<<endl;
gotoxy(1,14);
for(int i=0;i<40;i++)name[i]=' ';
salary=0.0;srno=0.0;
//jobdeg=;phno='asd';
cout<<"
 Enter the Serial no";cin>>srno;
cout<<"
 Enter Name";
gets(name);
cout<<"
 Enter Job designation";gets(jobdeg);
cout<<"
 Enter Phone number";gets(phno);
cout<<"
 Enter the Salary";cin>>salary;
cout<<"
";
}
void emp::display(void)
{
clrscr();
gotoxy(15,10);
cout<<"Student Details
 ";
gotoxy(1,12);
cout<<"
 Sr. NO  "<<srno<<"
 Name  "<<name<<""<<"
 Salary
"<<salary<<"
 Job designation  "<<jobdeg<<"	
 Phone no  "<<phno;
}
void emp::mod_data(void)
{
char nm[40],jd[40],ph[20];
float sal,sr;
clrscr();
gotoxy(15,8);
cout<<"Modify Employee's data";
char ch=cin.get();cout<<ch;
clrscr();
gotoxy(17,10);
cout<<"Current details are";
gotoxy(17,12);
cout<<"
 Sr.No. :-"<<srno<<"	
	Name:-"<<name<<"	
Job
designation"<<jobdeg<<"	
Salary"<<salary<<"	
Contact no"<<phno;
gotoxy(17,18);
cout<<"
Enter the new details";
cout<<"
 Serial no";cin>>sr;
cout<<"
 Name";gets(nm);
cout<<"
 Job designation ";gets(jd);
cout<<"
 Salary";cin>>sal;
cout<<"
 Phone number";gets(ph);
if(strlen(nm)!=0)strcpy(name,nm);
if(strlen(jd)!=0)strcpy(jobdeg,jd);
if(strlen(ph)!=0)strcpy(phno,ph);
if(sal>salary||sal<salary)salary=sal;
if(sr>srno||sr<srno)srno=sr;
clrscr();
}
int main()
{
clrscr();
emp empl;
fstream finout;
finout.open("empdl.dat",ios::in|ios::out|ios::binary);
if(!finout)
{
cout<<"Cannot open the file!!!";
return 1;
}
int choice ,merc=0,offset=0;
char ans;
do
{
clrscr();
if(count==0)
{
int r,c;
		clrscr();
	       /* Introduction with Swastik*/
		 textcolor(YELLOW);
	clrscr();

	for(r=5;r<20;r++)
       {
	 delay(100);
	  gotoxy(34,r);
	    cout<<"*";
	     }

  for(c=16;c<55;c=c+2)
  {
   delay(100);
   gotoxy(c,12);
    cout<<"*";
    }

for(c=35;c<55;c=c+2)
 {
  delay(100);
  gotoxy(c,5);
   cout<<"*";
  }

 for(c=34;c>15;c=c-2)
  {
   delay(100);
   gotoxy(c,20);
    cout<<"*";
 }

 for(r=12;r<21;r++)
  {
   delay(100);
   gotoxy(55,r);
    cout<<"*";
  }

 for(r=12;r>4;r=r-1)
  {
     delay(100);
     gotoxy(15,r);
      cout<<"*";
   }

for(r=8;r<=8;r++)
  {
    delay(10);
    gotoxy(25,r);
     cout<<"*";
  }

for(r=8;r<=8;r++)
  {
   delay(10);
   gotoxy(45,r);
    cout<<"*";
  }

for(r=16;r<=16;r++)
  {
    delay(10);
    gotoxy(25,r);
     cout<<"*";
  }

  for(r=16;r<=16;r++)
  {
   delay(10);
   gotoxy(45,r);
    cout<<"*";
  }
  delay(1400);
  clrscr();
/* OFFICE MANAGEMENT */
delay(300);
		cout<<"









			O ";
		delay(300);
		cout<<"F ";
		delay(300);
		cout<<"F ";
		delay(300);
		cout<<"I ";
		delay(300);
		cout<<"C ";
		delay(300);
		cout<<"E ";
		delay(300);
		cout<<"  M ";
		delay(300);
		cout<<"A ";
		delay(300);
		cout<<"N ";
		delay(300);
		cout<<"A ";
		delay(300);
		cout<<"G";
		delay(300);
		cout<<" E";
		delay(300);
		cout<<" M";
		delay(300);
		cout<<" E";
		delay(300);
		cout<<" N";
		delay(300);
		cout<<" T ";
		delay(300);
		cout<<" ****** ";
		delay(300);
		cout<<"   ... ";
		delay(1400);
cout<<"a
 






			 PRESS ANY KEY ........ ";

for(c=1;c<80;c++)
{
  delay(10);
  gotoxy(c,1);
  cout<<"&";
  }

for(r=1;r<26;r++)
 {
  delay(10);
  gotoxy(1,r);
  cout<<"&&";
 }

for(c=26;c<102;c++)
{
  delay(10);
  gotoxy(c,26);
  cout<<"&";
}

for(r=1;r<26;r++)
{
  delay(10);
  gotoxy(78,r);
  cout<<"&&";
}
getch();
}
clrscr();
textcolor(CYAN);
cout<<"
	

 Main menu";
cout<<"		______________";
cout<<"
 1.Add record";
cout<<"
 2.Modify record";
cout<<"
 3.Display record";
cout<<"
 4.Exit.......
 ";
cin>>choice;
switch(choice)
{
case 1:empl.getdata();
       merc=count;
       offset=((merc-1)*sizeof(emp));
       finout.seekp(offset,ios::beg);
       finout.write((char*) &empl,sizeof(emp));
       break;
case 2:if(!count)
{      gotoxy(20,20);
       cout<<" No record has been added yet!!!!
 plz run option 1
first!!!!";
       cout<<"Press any key to continue.........";
       getch();
       break;
}
       cout<<"Modify which record";
       cin>>merc;
       if( merc>count)
{
       cout<<"


 Only  "<<count<<"  These many records are added";
       cout<<"
 
 Invalid record number!!!!";
       gotoxy(20,20);
       cout<<"Press any key to continue!!!!!";
       getch();
       break;
}
       else
       {
       offset=(merc-1)*sizeof(emp);
       finout.seekg(offset,ios::beg);
       finout.read((char*)&empl,sizeof(emp));
       empl.display();
       cout<<"Modify this record?(y/n)";
       cin>>ans;
       if(ans=='y'||ans=='Y')
       {
       cout<<"Enter new details";
       empl.mod_data();
       finout.seekp(offset,ios::beg);
       finout.write((char*) &empl,sizeof(emp));
       cout<<"Record modified!!!!!";
       gotoxy(20,20);
       cout<<"Press any key to continue!!!!!!!!";
       getch();
       }
       break;
       }
case 3:
       if(!count)
       {
       cout<<"


 No record has been added yet";
       cout<<"Please run the optionm 1 first on the main screen";
       gotoxy(10,20);
       cout<<"press any key to continue";
       getch();
       break;
       }
       cout<<"
 
 Display which record";
       cin>>merc;
       cout<<endl;
       if( merc>count)
{
       cout<<"


 Only  "<<count<<"  These many records are added";
       cout<<"
 
 Invalid record number!!!!";
       gotoxy(20,20);
       cout<<"Press any key to continue!!!!!";
       getch();
       break;
}
       else
       {
       offset=(merc-1)*sizeof(emp);
       finout.seekg(offset,ios::beg);
       finout.read((char*)&empl,sizeof(emp));
       empl.display();
       gotoxy(10,20);
       cout<<"Press any key to continue!!!!!!!";
       getch();
       }
       break;
case 4:break;
default :cout<<"Wrong choice!!!! valid choice ar only 1-4";
	 break;
}
}while(choice>=1&& choice<=3);
finout.close();
return 0;
}

