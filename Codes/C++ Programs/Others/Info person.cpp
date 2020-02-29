Info person

#include<iostream.h>
#include<conio.h>
class person
{
	char *name,*add,*eadd;
	long pno,ctzno;
	public:
	void info()
  {
	cout<<"Enter the name:";
	cin>>name;
	cout<<"Enter the address:";
	cin>>add;
	cout<<"Enter the email address:";
	cin>>eadd;
	cout<<"Enter the phone no:";
	cin>>pno;
	cout<<"Enter the citizenship no:";
	cin>>ctzno;
  }
  void PrintInfo()
  {
	cout<<"********************Person Data***************************"<<endl;
	cout<<"Name:"<< name <<endl;
	cout<<"Address:"<<add<<endl;
	cout<<"E-mail address:"<<eadd<<endl;
	cout<<"Phone no:"<<pno<<endl;
	cout<<"Citizenship no:"<<ctzno<<endl;
	cout<<"********************Thank YOU******************************"<<endl;
  }
};
void main()
{
	person d;
	d.info();
	d.PrintInfo();
	getch();
}
