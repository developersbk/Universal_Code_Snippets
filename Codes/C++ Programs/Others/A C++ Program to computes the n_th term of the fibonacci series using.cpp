A C++ Program to computes the n_th term of the fibonacci series using
Divide and Conquer Strategy.

Code :


 # include <iostream.h>
 # include    <conio.h>


 //------------------------  Function
rototypes  ------------------------//



 const long fibonacci(const int);


 //----------------------------- 
main( )  -------------------------------//



 int main()
 {
    clrscr( );

    int number;

    cout<<"
 Enter the number ( 1 - 25 ) = ";
    cin>>number;

    number=((number>25)?25:number);

    cout<<"

 The "<<number<<"_th term of fibonacci series =
"<<fibonacci(number);

    getch( );
    return 0;
 }



 //------------------------  Function
efinitions  -----------------------//



 //---------------------------- 
fibonacci( )  ---------------------------//


/

 const long fibonacci(const int n)
 {
    if(n<=1)
       return n;

    else
       return (fibonacci(n-1)+fibonacci(n-2));
 }


