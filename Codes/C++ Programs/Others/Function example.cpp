Function example

Create your first function in C++
#include <iostream.h> 
int AddIt(int x,int y)
{
return (x + y);
}

int main()
{
int a,b,c;
cout<<"Please enter two integers to add :\n";
//get the two integers
cin>>a;
cin>>b;
//call the AddIt function
c = AddIt(a , b);
//display the answer
cout<<"The answer is : "<<c<<endl;

return 0;
}
