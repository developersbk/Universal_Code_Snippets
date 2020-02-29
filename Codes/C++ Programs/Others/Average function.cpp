Average function

#include <iostream>
#include <stdlib.h> 
int Average(int i)
{
static int sum = 0, count = 0; 
sum = sum + i; 
count++; 
return sum / count; 
}

int main()
{

int num;
do{

cout<<"Enter numbers ( -1 to quit )"<<endl;
cin>>num;
/*if number is not -1 print the average*/
if(num != -1)
cout<<"The average is "<<Average(num)<<endl;


}while(num>-1);
return 0;
}
