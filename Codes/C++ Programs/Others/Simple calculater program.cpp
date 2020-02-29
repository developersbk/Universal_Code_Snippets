Simple calculater program

Code :
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <math.h>


using namespace std;
int main(int argc, char* argv[])
{

        float input1;
        float input2;
        double output;
        char what;
        char num1[34];
        char num2[34];
        gotoxy(15,1);
        cout<<"welcome to the calculater program"<<endl;
        sleep(5);
        clrscr();

        clrscr();
        for(;;)
        {
        clrscr();
        cout<<"enter the first number:"<<endl;
        cin>>num1;
        input1=atof(num1);
        clrscr();
        cout<<"enter the second number:"<<endl;
        cin>>num2;
        input2=atof(num2);
        clrscr();
        cout<<"enter
opearation
+.add
-.minus
*.multiply
/.divide
s.square
root
e.exitt"<<endl;
        cin>>what;
        switch(what)
        {
                case'+':
                output=input1+input2;
                clrscr();
                cout<<input1<<what<<input2<<"="<<output<<endl;
                system("PAUSE");;
                break;

                case'-':
                output=input1-input2;
                clrscr();
                cout<<input1<<what<<input2<<"="<<output<<endl;
                system("PAUSE");
                break;

                case'*':
                output=input1*input2;
                clrscr();
                cout<<input1<<what<<input2<<"="<<output<<endl;
                system("PAUSE");
                break;

                case'/':
                output=input1/input2;
                clrscr();
                cout<<input1<<what<<input2<<"="<<output<<endl;
                system("PAUSE");
                break;

                case's':
                case'S':
                output=sqrt(input1);
                clrscr();
                cout<<"the square root of "<<input1<<" is 
"<<output<<endl;
                system("PAUSE");
                break;

                default:
                cout<<"ok"<<endl;
                system("PAUSE");
                exit(0);
        }
        }
        system("PAUSE");

        return 0;
