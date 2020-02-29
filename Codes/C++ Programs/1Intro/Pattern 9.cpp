#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();  //clears the previous screen
//Printing pattern
    int i,space,rows,k=0,count=0,count1=0;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=1; i<=rows; ++i)
        {
            for(space=1; space<=rows-i; ++space)
                {
                    cout<<"  ";
                    ++count;
                }
            while(k!=2*i-1)
                {
                    if (count<=rows-1)
                        {
                            cout<<i+k<<" ";
                            ++count;
                        }
                    else
                        {
                            ++count1;
                            cout<<i+k-2*count1<<" ";
                        }
                    ++k;
                }
            count1=count=k=0;
            cout<<"\n";
        }
    getch();  // wait for input
}

/*
        1
       232
      34543
     4567654
    567898765

        */