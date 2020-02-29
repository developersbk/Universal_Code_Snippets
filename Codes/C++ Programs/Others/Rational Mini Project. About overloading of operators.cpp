Rational Mini Project. About overloading of operators

Code :

//main subject:operator-overloading

#include <iostream.h>

class rational
{
private:
	int a;
	int b;
public:
	rational(int=1,int=1);
	void set_ab(int,int);
	void print_fraction();
    void print_floating();
	rational operator+(rational object);
    rational operator-(rational object);
	rational operator*(rational object);
    rational operator/(rational object);
    rational operator=(rational object);
	friend ostream &operator<<(ostream &,rational &);
	friend istream &operator>>(istream &,rational &);
	int operator==(rational object);
	int operator!=(rational object);
	int operator>(rational object);
	int operator<(rational object);
};

/*--------------------------------------------------------*/

rational::rational(int m,int n)
{
	set_ab(m,n);
}

/*--------------------------------------------------------*/

void rational::set_ab(int x,int y)
{
	int temporary,m,n;
	m=x;
    n=y;
	if(n>m)
	{
		temporary=n;
		n=m;
		m=temporary;
	}
	while(m!=0 && n!=0)
	{
		if(m%n==0)
			break;
		temporary=m%n;
		m=n;
		n=temporary;
		continue;
	}
 	a=x/n;
	b=y/n;

}

/*--------------------------------------------------------*/

void rational::print_fraction()
{
	cout<<a<<"/"<<b<<"=";
}

/*--------------------------------------------------------*/

void rational::print_floating()
{
	cout<<(float)a/b<<endl;
}

/*--------------------------------------------------------*/

rational rational::operator+(rational object)
{
	rational temporary;
	temporary.a=a*object.b+b*object.a;
	temporary.b=b*object.b;
	return(temporary);
}

/*--------------------------------------------------------*/

rational rational::operator-(rational object)
{
	rational temporary;
	temporary.a=a*object.b-b*object.a;
	temporary.b=b*object.b;
	return(temporary);
}

/*--------------------------------------------------------*/

rational rational::operator*(rational object)
{
	rational temporary;
	temporary.a=a*object.a;
    temporary.b=b*object.b;
	return(temporary);
}

/*--------------------------------------------------------*/

/*
rational rational::operator/(rational object)
{
	rational temporary;
	temporary.a=a*object.b;
	temporary.b=b*object.a;
	return(temporary);
}
*/

/*--------------------------------------------------------*/

rational rational::operator/(rational object)
{
	a=a*object.b;
	b=b*object.a;
	return(*this);
}

/*--------------------------------------------------------*/

rational rational::operator=(rational object)
{
	a=object.a;
	b=object.b;
	return(*this);
}

/*--------------------------------------------------------*/

ostream &operator<<(ostream &output,rational &object)
{
	output<<object.a<<"/"<<object.b<<endl;
	return output;
}

/*--------------------------------------------------------*/

istream &operator>>(istream &input,rational &object)
{
	cout<<"Enter a,b:"<<endl;
	input>>object.a;
	input>>object.b;
	return input;
}

/*--------------------------------------------------------*/

int rational::operator==(rational object)
{
	if(a==object.a && b==object.b)
		return(1);
	else
		return(0);
}

/*--------------------------------------------------------*/

int rational::operator!=(rational object)
{
	if(a!=object.a || b!=object.b)
		return(1);
	else
		return(0);
}

/*--------------------------------------------------------*/

int rational::operator>(rational object)
{
	return((a/b)>(object.a/object.b) ? 1:0);
}

/*--------------------------------------------------------*/

int rational::operator<(rational object)
{
	return((a/b)<(object.a/object.b) ? 1:0);
}

/*--------------------------------------------------------*/

int main()
{
	rational x(3,4),y(3,4),z1,z2,z3,z4,z5;
	if(x==y)
	{cout<<"These 2 fractions are equl."<<endl;}
	if(x!=y)
	{cout<<"These 2 fractions are not equl."<<endl;}
	if(x>y)
	{cout<<"x is bigger than y."<<endl; }
	if(x<y)
	{cout<<"x is smaller than y."<<endl;}
	z1=x+y;
	cout<<"z1=x+y=";
	z1.print_fraction();
	z1.print_floating();
	z2=x-y;
	cout<<"z2=x-y=";
	z2.print_fraction();
	z2.print_floating();
	z3=x*y;
	cout<<"z3=x*y=";
	z3.print_fraction();
	z3.print_floating();
	z4=x/y;
	cout<<"z4=x/y=";
	z4.print_fraction();
	z4.print_floating();
	z5=y=x;
	cout<<"x=";
	x.print_fraction();
	x.print_floating();
	cout<<"y=";
	y.print_fraction();
	y.print_floating();
	cout<<"z5=";
	z5.print_fraction();
	z5.print_floating();

/*	rational k(1,1),l(1,1),z6,z7,z8,z9,z10;
	cin>>k>>l;
	if(k==l)
	{cout<<"These 2 fractions are equl."<<endl;}
	if(k!=l)
	{cout<<"These 2 fractions are not equl."<<endl;}
    if(k>l)
	{cout<<"k is bigger than l."<<endl;}
	if(k<l)
	{cout<<"k is smaller than l."<<endl;}
	z6=k+l;
	z7=k-l;
	z8=k*l;
	z9=k/l;
	z10=l=k;
	cout<<"z6="<<z6<<"z7="<<z7<<"z8="<<z8<<"z9="<<z9;
	cout<<"k="<<k<<"l="<<l<<"z10="<<z10;
*/
	return(0);
}
