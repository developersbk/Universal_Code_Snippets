If - Else example

#include <iostream.h>
#include <math.h> 
int main()
{
double radius;
//get user input
cout<<"Please enter the radius : ";
cin>>radius;
//act on user input
if(radius < 0.0)
cout<<"Cannot have a negative radius"<<endl;
else
cout<<"The area of the circle is "<<3.1416 * pow(radius,2)<<endl;

return 0;
}
