Class for storing a Persons details

# include<iostream.h>
# include<string.h> // for strcpy
# include<conio.h>

class person
{
	char name[20];
	int yob; //Year of birth
	int yod; // Year of death
public:
	person()
	{       strcpy(name,"N.A.");
		yob=2000; yod=2000;
	}
	~person()
	{
		delete []name;
	}
	void getdata()
	{
		cout<<"

Enter the name : ";
		cin.getline(name,19);
		cout<<"
Enter the year of birth";
		cin>>yob;
		cout<<"
Enter the year of death";
		cin>>yod;
	}
	void print()
	{
		cout<<"

Name:"<<name;
		cout<<"
Year of Birth: "<<yob;
		cout<<"
Year of death: "<<yod;
	}
}; //end of the class
void main()
{
clrscr();
// demonstrating the working for single object
person p;
//getting the input
p.getdata();
//displaying the i/p data
p.print();
getch();
}
