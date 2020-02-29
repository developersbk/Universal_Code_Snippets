#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();  //clears the previous screen
//Printing pattern
    int i,j,rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=rows; i>=1; --i)
        {
            for(j=1; j<=i; ++j)
                {
                    cout<<"* ";
                }
            cout<<"\n";
        }
    getch();  // wait for input
}

/*
*****
****
***
**
*
*/