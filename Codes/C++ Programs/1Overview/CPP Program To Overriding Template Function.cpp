// Step 1: Declare the template function

// Step 2: Declare the overload function swap args.

// Step 3: Call the overloaded function swap args with float arguments.

// Step 4: Call the overload function swap args with char arguments.

// Step 5: Display the content.



#include<iostream.h>
template <class X> void swapargs(X &a,X &b)
{
    X temp;
    temp = a;
    a=b;
    b=temp;
    cout<<"Inside the template swapargs";
}

void swapargs(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside swapargs int specialization";
}

int main()
{
    int i=0,j=20;
    double x=10.1,y=23.3;
    char a='x',b='z';
    cout<<"original i,j : "<<i<<' '<<j<<'\n';
    cout<<"original x,y : "<<x<<' '<<y<<'\n';
    cout<<"original a,b : "<<a<<' '<<b<<'\n';
    swapargs(i,j);  //calls explicitly overload swapargs()
    swapargs(x,y); //Calls generic swapargs ()
    swapargs(a,b); //Calls generic swapargs()
    cout<<"swapped i,j : "<<i<<' '<<j<<'\n';
    cout<<"swapped x,y : "<<x<<' '<<y<<'\n';
    cout<<"swapped a,b : "<<a<<' '<<b<<'\n';
}



