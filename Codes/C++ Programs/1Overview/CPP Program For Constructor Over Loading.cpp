// Step 1: Create the class.

// Step 2: Declare the constructors with different parameter type and list.

// Step 3: Create the objects for the Fixed_deposite.

// Step 4: Object creation automatically call the type matched constructor.

// Step 5: The matched type constructor procedure will be run.

// Step 6: Compile and run the program.

#include <iostream.h>
class Fixed_deposite
{
    long int P_amount;
    int Years;
    float Rate;
    float R_value;
public :
    Fixed_deposit() {}
    Fixed_deposit(long int p, int y,float r=0.12);
    Fixed_deposit(long int p,int y,int r);
    Void display(void);
};
Fixed_deposite :: Fixed_deposit (long int p,int y,float r)
{
    P_amount=p;
    Years=y;
    Rate =r;
    R_value=p_amount;
    for(int i=1; i<=y; i++)
        R_value=R_value * (1.0+r);
}

Fixed_deposite :: Fixed_deposit (long int p,int y,int r)
{
    P_amount=p;
    Years=y;
    Rate =r;
    R_value=p_amount;
    for(int i=1; i<=y; i++)
        R_value=R_value * (1.0+float(r)/100);
}

void Fixed_deposite :: display(void)
{
    cout<<”\n”<<”Principal Amount=”<<P_amoun<<”\n”<<”Return Value=”<<R_value <<”\n”;
}
int main()
{
    Fixed_deposite FD1,FD2,FD3;
    long int p;
    int y;
    float r;
    int R;
    cout<<”ENTER  amount,period,interest rate(in percent)”<<”\n”;
    cin>>p>>y>>R;
    FD1 =Fixed_deposite(p,y,R);
    cout<<”ENTER  amount,period,interest rate(decimal form)”<<”\n”;
    cin>>p>>y>>r;
    FD2 =Fixed_deposite(p,y,R);
    cout<<”Enter the amount and period\n”;
    cin>>p>>y;
    FD1 =Fixed_deposite(p,y);
    cout<<"\nDeposiote";
    FD1.display();
    cout<<"\nDeposiote";
    FD2.display();
    cout<<"\nDeposiote";
    FD3.display();
return 0:
}



