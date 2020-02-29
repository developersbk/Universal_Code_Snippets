Extension of publication class

# include<iostream.h>
# include<conio.h>

class publication
{
	char title[30];
	float price;
public:
	void getdata()
	{
		cout<<"Enter the title :
 "; cin>>title;
		cout<<"Enter the price :
 "; cin>>price;
	}
	void putdata()
	{
		cout<<"The title is : "<<title<<endl;
		cout<<"Price is     : "<<price<<endl;
	}
};
class book: private publication
{
	int pages;
public:
	void getdata()
	{
		cout<<"      BOOK DETAILS 
";
		publication::getdata();
		cout<<"Enter the number of pages 
";
		cin>>pages;
	}
	void putdata()
	{
		cout<<"      BOOK DETAILS
";
		publication::putdata();
		cout<<"Number of pages : " <<pages<<endl;
	}
};
class tape: private publication
{
	float time;
public:
	void getdata()
	{
		cout<<"     TAPE DETAILS
";
		publication::getdata();
		cout<<"Enter the time length of the casette"; cin>>time;
	}
	void putdata()
	{
		cout<<"      TAPE DETAILS ";
		publication::putdata();
		cout<<"Time length :"<< time<<endl;
	}
};
void main()
{
book b;
tape t;
b.getdata();
t.getdata();
b.putdata();
t.putdata();
}
