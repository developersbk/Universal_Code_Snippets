A simple class called Point, with all necessary functions

# include<iostream.h>
# include<conio.h>
# include<math.h>

class point
{
	int x,y,z;
public:
	point()
	{
		x=y=z=0;
	}
	point(int i,int j,int k)
	{
		x=i;
		y=j;
		z=k;
	}
	point(point &a)
	{
		x=a.x;
		y=a.y;
		z=a.z;
	}

	negate()
	{
		x=-x;
		y=-y;
		z=-z;
	}
	void print()
	{
		cout<<"("<<x<<","<<y<<","<<z<<")";
	}
	int norm()
	{
		return(sqrt(x*x+y*y+z*z));
	}
};
void main()
{
clrscr();
point p(2,3,4),p1(p);

cout<<"The point has the coordinates ";
p.print();
cout<<"
The point coordinates after negation ";
p.negate();
p.print();
cout<<"
Normal Distance of the point from (0,0,0) is "<<p.norm();
cout<<"
The coordinates of the point p1 after copy constructor is ";
p1.print();
getch();
}
