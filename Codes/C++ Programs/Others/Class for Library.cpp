Class for Library

# include<iostream.h>
# include<conio.h>
// Creating a basic template for book and magazine
class lib
{
	private:
		char title[20];
		char pub[20];
		unsigned int acc_no;
	public:
//method for getting inputs
		void get_details()
		{
		cout<<"Enter the book title"<<endl;
		cin>>title;
		cout<<"Enter the publisher name"<<endl;
		cin>>pub;
		cout<<"Enter the accession number"<<endl;
		cin>>acc_no;
		}
//method for showing output
		void show_details()
		{
		cout<<"Title : "<<title<<endl;
		cout<<"Publisher : "<<pub<<endl;
		cout<<"Accession No. : "<<acc_no<<endl;
		}
};
// Class Book derived from lib
class book :  private lib
{
private:
	char author[20];
public:
	void get_details()
	{
	lib::get_details();
	cout<<"Enter the author's name: "<<endl;
	cin>>author;
	}
	void show_details()
	{
	lib::show_details();
	cout<<"Autohr : "<<author<<endl;
	}
};
//Class for Magazine derived from lib
class magz :  private lib
{
private:
	char editor[20];
public:
	void get_details()
	{
	lib::get_details();
	cout<<"Enter the editor's name: "<<endl;
	cin>>editor;
	}
	void show_details()
	{
	lib::show_details();
	cout<<"editor : "<<editor<<endl;
	}
};
void main(void)
{
clrscr();
//creating objects
book b;
magz m;
b.get_details();
m.get_details();
b.show_details();
m.show_details();
getch();
}
