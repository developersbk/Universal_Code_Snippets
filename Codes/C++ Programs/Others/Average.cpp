Average

#include <iostream.h>
#include <math.h> 
int main()
{
int number1,number2,number3;
double average;

cout<<"Enter three integers and I will display the average"<<endl;
cin>>number1>>number2>>number3;
average = (number1 + number2 + number3) / 3.0;
cout<<"The average is "<<average<<endl;

return 0;
}
