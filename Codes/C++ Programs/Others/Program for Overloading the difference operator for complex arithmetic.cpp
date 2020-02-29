Program for Overloading the difference operator for complex arithmetic

#include<iostream.h>
#include<conio.h>

class complex
{
float real;
float img;
public:
	complex()
	{
	real = 0; img = 0;
	}
	complex(float a,float b)
	{
	real  =a ; img = b;
	}
	complex operator -(complex );
	void disp();
};
// Fn.for overloading of - operator for complex arithmetic
complex complex::operator-(complex a)
{
	return complex(real-a.real,img-a.img);
}
// function for display of Real & Imaginary Parts
void complex::disp()
{
cout<<"
The real part is : "<<real;
cout<<"
The imaginary part is: "<<img;
}
void main(void)
{
complex c1(12.0,4.5),c2(8,6),c3;
cout<<"
The value of c1 is:
";
c1.disp();
cout<<"
The value of c2 is:
";
c2.disp();
cout<<"
The value of c3 is:
";
c3.disp();
c3=c1-c2;
cout<<"

After c3=c1-c2, c3 is : 
";
c3.disp();
getch();
}
