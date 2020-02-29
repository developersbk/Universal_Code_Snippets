Class for storing residential addresses

# include<iostream.h>
# include<conio.h>
# include<string.h>

class address
{
char name[20];
char houseno[10];
char street[20];
char city[20];
long int pin;
public:
address()
{
	strcpy(name,"Unspecified");
	strcpy(houseno,"NA");
	strcpy(street,"NA");
	strcpy(city,"NA");
	pin=0;
}
void put_data()
{
cout<<"
Enter the name of the person";
cin.getline(name,19);
cout<<"
Enter the House number";
cin.getline(houseno,9);
cout<<"
Enter the street address";
cin.getline(street,19);
cout<<"
Enter the city";
cin.getline(city,19);
cout<<"
Enter the pin code";
cin>>pin;
}
void get_data()
{
cout<<"***********************************************"<<endl;
cout<<"NAME     : "<<name<<endl;
cout<<"HOUSE NO.: "<<houseno<<endl;
cout<<"STREET   : "<<street<<endl;
cout<<"CITY     : "<<city<<endl;
cout<<"PIN      : "<<pin<<endl;
cout<<"***********************************************";
}
};
void main()
{
clrscr();
address obj;
obj.put_data();
obj.get_data();
getch();
}
