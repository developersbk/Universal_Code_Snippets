Class that imitates the functionality of the basic data type

# include<iostream.h>
#include<conio.h>
class Int
{
int var;
public :
	/* Here we try to overcome the problem of carbage value by
	   initializing the value by 0 */
	Int()
	 {
	  var =0;
	 }

	// Overloaded Constructor
	Int(int a )
	{
		var = a;
	}
	int add( Int b) // Note : Int , not int
	{
		var+=b.var; /* For ex. if the user enters
				a.add(b);
				then result will be
				a = a + b; */
		return(var);
	}
	void disp() //again, Int
	{
		cout<<var;
	}
};                   // Do not forget this ;
void main(void)
{
	clrscr();
	Int a = 12;
	Int b = 10;
	a.disp();
	cout<<"
 a+b = "<<a.add(b);
	getch();
}
