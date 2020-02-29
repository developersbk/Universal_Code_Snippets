Modification of previous program to handle 10 customers

# include<iostream.h>
# include<conio.h>
# include<iomanip.h>

class bank
	{
	char name[20];
	int acno;
	char actype[4];
	float balance;
	public:
	void init();
	void deposit();
	void withdraw();
	void disp_det();
	};
// member functions
void bank :: init()
{
cout<<"

		New Account
";
cout<<"

Enter the Name of the depositor : ";
cin.get(name,19,'
');
cout<<"
Enter the Account Number : ";
cin>>acno;
cout<<"
Enter the Account Type : (CURR/SAVG/FD/RD/DMAT) ";
cin>>actype;
cout<<"
Enter the Amount to Deposit : ";
cin >>balance;
}
void bank :: deposit()
{
float more;
cout <<"
		Depositing
";
cout<<"

Enter the amount to deposit : ";
cin>>more;
balance+=more;
}
void bank :: withdraw()
{
float amt;
cout<<"
		Withdrwal
";
cout<<"

Enter the amount to withdraw : ";
cin>>amt;
balance-=amt;
}
void bank :: disp_det()
{
cout<<"

		Account Details

";
cout<<"Name of the depositor : "<<name<<endl;
cout<<"Account Number        : "<<acno<<endl;
cout<<"Account Type          : "<<actype<<endl;
cout<<"Balance               : $"<<balance<<endl;
}

void main(void)
{
clrscr();
bank obj[9]; //declaring an array of objects
int choice  =1;
int num = 0;
// user must enter 0 to exit
while (choice != 0 )
{
cout<<"

		Choose the customer ID between 0 and 9 : ";
cin >> num;
cout<<"

Enter 0 to exit
	1. Initialize a new acc.
	2. Deposit
	3.Withdraw
	4.See A/c Status";
cin>>choice;
switch(choice)
{
	case 0 :
		cout<<"

		EXITING PROGRAM.";
		break;
	case 1 : obj[num].init();
		break;
	case 2: obj[num].deposit();
		break;
	case 3 : obj[num].withdraw();
		break;
	case 4: obj[num].disp_det();
		break;
	default: cout<<"

Illegal Option"<<endl;
}
}
getch();
}
