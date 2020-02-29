Converts Decimal Numbers to Binary

#include <iostream.h>
#include <conio.h>
void main()


   {



     int i, ch;
                    cout<<"Enter an integer: ";
                    cin>>ch;
                    for(i=0x80;i;i=i>>1)
                                                  cout<<((ch&i)?'1':'0');


     getch();

                        cout<<endl;
   }
