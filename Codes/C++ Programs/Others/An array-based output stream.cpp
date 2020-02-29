An array-based output stream
#include <strstream>
#include <iostream>
using namespace std;
int main()
{
  char str[80];
  ostrstream outs(str, sizeof(str));
  outs << "array-based I/O. ";
  outs << 1024 << hex << " ";
  outs.setf(ios::showbase);
  outs << 100 << ' ' << 99.789 << ends;
  cout << str;  
  return 0;
}
