Cin example

#include <iostream.h>

int main(void)
{
int number,highNumber;

cout<<"Please enter a whole number (ctrl q) to quit";
while(cin>>number)
{
if(number > highNumber)
highNumber = number;
cout<<"Please enter a whole number (ctrl q) to quit";

}
cout<<"High number is :"<<highNumber<<endl;
return 0;
}
