Complete implementation of Publication Class

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
class sales
{
	float s1,s2,s3; // getting the sale of last three momths
public:
	void getdata()
	{
		cout<<"Enter the sale of first month:
";
		cin>>s1;
		cout<<"Enter the sale of second month:
";
		cin>>s2;
		cout<<"Enter the sale of third month:
";
		cin>>s3;
	}
	void putdata()
	{
		cout<<"Sale in first month : $"<<s1<<endl;
		cout<<"Sale in sec.  month : $"<<s2<<endl;
		cout<<"Sale in third month : $"<<s3<<endl;
	}
};


class book: private publication, private sales
{
	int pages;
public:
	void getdata()
	{
		cout<<"      BOOK DETAILS 
";
		publication::getdata();
		sales::getdata();
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
		sales::putdata();
	}
};
class tape: private publication,private sales
{
	float time;
public:
	void getdata()
	{
		cout<<"     TAPE DETAILS
";
		publication::getdata();
		sales::getdata();
		cout<<"Enter the time length of the casette"; cin>>time;
	}
	void putdata()
	{
		cout<<"      TAPE DETAILS ";
		publication::putdata();
		cout<<"Time length :"<< time<<endl;
		sales::putdata();
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
