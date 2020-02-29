#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();  //clears the previous screen
//Printing first pattern (Floyds triangle)
    int rows,i,j,k=0;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(i=1; i<=rows; i++)
        {
            for(j=1; j<=i; ++j)
                cout<<k+j<<" ";
            ++k;
            cout<<endl;
        }
    getch();  // wait for input
}