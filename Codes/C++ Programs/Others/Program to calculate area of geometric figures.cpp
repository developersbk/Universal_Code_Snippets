Program to calculate area of geometric figures.

#include<iostream.h>
#include<math.h>
void main()
{
               char character;
               double area;
               cout<<"circle(c)
";
               cout<<"square(s)
";
               cout<<"rectangle(r)
";
               cout<<"triangle(t)
";
               cout<<"Select c,s,r or t:";
loop:
               cin>>character;
               if((character=='c')||(character=='C'))
               {
                                double r;
                                const double pi=3.142;
                                cout<<"Enter radius:";
                                cin>>r;
                                area=pi*pow(r,2);
               }
               else if((character=='s')||(character=='S'))
               {
                                double l;
                                cout<<"Enter length:";
                                cin>>l;
                                area=pow(l,2);
               }
               else if((character=='r')||(character=='R'))
               {
                                double l,w;
                                cout<<"Enter length:";
                                cin>>l;
                                cout<<"Enter width:";
                                cin>>w;
                                area=l*w;
               }
               else if((character=='t')||(character=='T'))
               {
                                double b,h;
                                cout<<"Enter base:";
                                cin>>b;
                                cout<<"Enter height:";
                                cin>>h;
                                area=h*b/2;
               }
               else
               {
                                cout<<"Select only c,s,r or t:";
                                goto loop;
               }
               cout<<"Area:"<<area<<endl;
}
