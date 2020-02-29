Another example of a conversion function
#include <iostream>
using namespace std;
class Power {
  double b;
  int e;
  double val;
public:
  Power(double base, int exp);
  Power operator+(Power o) {
    double base;
    int exp;
    base = b + o.b;
    exp = e + o.e;
    Power temp(base, exp);
    return temp;
  }
  operator double() { return val; } // convert to double
};
Power::Power(double base, int exp)
{
  b = base;
  e = exp;
  val = 1;
  if(exp==0) 
     return;
  for( ; exp>0; exp--) 
     val = val * b;
}
int main()
{
  Power x(4.0, 2);
  double a;
  a = x;              // convert to double
  cout << x + 100.2;  // convert x to double and add 100.2
  cout << "\n";
  Power y(3.3, 3), z(0, 0);
  z = x + y;          // no conversion
  a = z;              // convert to double
  cout << a;
  return 0;
}
