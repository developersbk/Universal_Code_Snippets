Railway seat reservation question which comes in sapient

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct rail
{

	int seatNo;
	int isEmpty;

}seat[67];

void reserve(int n);
int arrRowState[15];

void main()
{
	for(int i = 0 ; i <67 ; i++)
	{
	   seat[i].seatNo=(i+1);
	   seat[i].isEmpty=1;
	}
	for(i=0 ; i<13 ; i++)
	   arrRowState[i]=5;

	arrRowState[13]=2;
	arrRowState[14]=67;

	char res='y';
	do
	{
		int n;
		clrscr();
		cout<<"Enter d no of seats u want to reserve : ";
		cin>>n;
		reserve(n);
		cout<<"


Do u want to reserve more seats?";
		res=getchar();
	}while(res!='n');
}

void reserve(int n)
{
	if(n>arrRowState[14])
	{
		cout<<"Too large group to accomodate";
		getch();
		return;
	}

	int flag=0;
	int seatbook;
	for(int i = 0 ; flag==0&&i<=13 ; i++)
	{
		if(arrRowState[i] >= n)
		{
			flag=1;
		    //	cout<<"Following Seats Alloted";
			seatbook=(((i)*5)+(6-arrRowState[i]));
			for(int j = 0 ; j < n ; j++)
			{
				cout<<"
"<<seatbook+j<<"
";
				seat[(seatbook+j)].isEmpty=0;
			}
			arrRowState[i]=arrRowState[i]-n;
			arrRowState[14]=arrRowState[14]-n;
		}
	}
	if(flag==0)
	{
		while(n!=0)
		{
			int max,rowNo=0;
			max=arrRowState[0];
			for( int j = 0 ; j<14 ; j++)
			{
				if(arrRowState[j] > max)
				{
					max=arrRowState[j];
					rowNo=j;
				}

			}
			if(n>max)
			{
				n=n-max;
				seatbook=(((rowNo)*5)+(6-arrRowState[rowNo]));
				arrRowState[rowNo]=arrRowState[rowNo]-max;
				for( int j = 0 ; j<max ; j++)
				{
				   cout<<"
"<<(seatbook+j)<<"
";
				   seat[(seatbook+j)].isEmpty=0;
				}
			}
			else
			{
			    reserve(n);
			    n=0;
			}

		}

	}

	getch();
}
