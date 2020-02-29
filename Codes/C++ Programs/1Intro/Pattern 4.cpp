#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();  //clears the previous screen
//Printing pattern
    int i,j,rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=1; i<=rows; ++i)
        {
            for(j=1; j<=i; ++j)
                {
                    cout<<j<<" ";
                }
            cout<<"\n";
        }
    getch();  // wait for input
}

/*
1
12
123
1234
12345
*/