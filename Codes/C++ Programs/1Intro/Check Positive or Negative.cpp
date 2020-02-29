#include <iostream.h>
#include<conio.h>

void main()
{
    clrscr();   //clear screen
    int number;
    cout<< "Enter an integer: ";
    cin>> number;
    if ( number >= 0)
        {
            cout << "You entered a positive integer: "<<number<<endl;
        }
    else
        {
            cout<<"You entered a negative integer: "<<number<<endl;
        }
    cout<<"This statement is always executed because it's outside if...else statement.";
    getch();
}