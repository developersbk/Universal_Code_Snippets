#include <iostream.h>

#include<conio.h>

class Power
{

    double b;

    int e;

    double val;

public:

    Power(double base, int exp);

    double getPower()
    {
        return val;
    }

};

Power::Power(double base, int exp)

{
    b = base;
    e = exp;
    val = 1;
    if(exp == 0)
        return;
    for( ; exp > 0; exp--)
        val = val * b;
}

int main()

{
    clrscr():
        Power x(4.0, 2), y(2.5, 1), z(5.0, 0);
        cout << x.getPower() << " ";
        cout << y.getPower() << " ";
        cout << z.getPower() << endl;
        getch();
        return 0;
    }


