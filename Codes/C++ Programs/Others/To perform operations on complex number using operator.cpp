To perform operations on complex number using operator

:#include<iostream.h>
#include<math.h>
#include<process.h>
#include<conio.h>
class comp
                {
                private:
                                 float real,image;
                public:
                                 comp operator +(comp a);
                                 comp operator -(comp a);
                                 comp operator *(comp a);
                                 comp operator /(comp a);
                                 void getdata();
                                 void show();
                };
void comp :: getdata()
                {
                cout<<"

		Enter real part=";
                cin>>real;
                cout<<"

		Enter imaginary part=";
                cin>>image;
                }
void comp :: show()
                {
                                 cout.precision(2);
                if(image<0)
                                 cout<<real<<image<<"i";
                else
                                 cout<<real<<"+"<<image<<"i";
                }
comp comp :: operator +(comp a)
                {
                comp temp;
                temp.real=real+a.real;
                temp.image=image+a.image;
                return temp;
                }
comp comp :: operator -(comp a)
                {
                comp temp;
                temp.real=a.real-real;
                temp.image=a.image-image;
                return temp;
                }
comp comp :: operator *(comp a)
                {
                comp temp;
                temp.real=(a.real*real)-(a.image*image);
                temp.image=(a.real*image)+(real*a.image);
                return temp;
                }
comp comp :: operator /(comp a)
                {
                comp temp;
                temp.real=((real*a.real)+(a.image*image))/((real*real)+(image*image));
                temp.image=((real*a.image)-(image*a.image))/((real*real)+(image*image));
                return temp;
                }

void main()
                {
                comp d,e,f;
                int ch;
                char ans;
                do
                {
                clrscr();
                cout<<"

		********** Menu **********
";
                cout<<"

		1>Addition";
                cout<<"

		2>Subtraction";
                cout<<"

		3>Multiplication";
                cout<<"

		4>Division";
                cout<<"

		5>Exit";
                d.getdata();
                e.getdata();
                cout<<"

		first no=>";
                d.show();
                cout<<"

		second no=>";
                e.show();
                cout<<"

		enter the choice=>";
                cin>>ch;
                switch(ch)
                                 {
                                 case 1:
                                 f=d-e;
                                 cout<<"

		addition of two no=>";
                                 f.show();
                                 break;
                                 case 2:
                                 f=d-e;
                                 cout<<"

		subtraction of two no=>";
                                 f.show();
                                 break;
                                 case 3:
                                 f=d*e;
                                 cout<<"

		multiplication of two no=>";
                                 f.show();
                                 break;
                                 case 4:
                                 f=d/e;
                                 cout<<"

		division of two no=>";
                                 f.show();
                                 break;
                                 case 5:
                                 exit(0);
                                 break;
                                 }
                                 cout<<"

		do you want to continue(y/n)?=";
                                 cin>>ans;
                                 }
                                 while(ans=='y'||ans=='Y');
                                 getch();
                                 }
