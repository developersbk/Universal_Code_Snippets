Applying Template Classes: A Generic Array Class
#include <iostream>
#include <cstdlib>
using namespace std;
   
const int SIZE = 10;
   
template <class T> class MyClass {
  T a[SIZE];
public:
  MyClass() {
    register int i;
    for(i=0; i<SIZE; i++) a[i] = i;
  }
  T &operator[](int i);
};
   
template <class T> T &MyClass<T>::operator[](int i)
{
  if(i<0 || i> SIZE-1) {
    cout << "\nIndex value of ";
    cout << i << " is out-of-bounds.\n";
    exit(1);
  }
  return a[i];
}
   
int main()
{
  MyClass<int> intob; // integer array
  MyClass<double> doubleob; // double array
   
  for(int i=0; i<SIZE; i++) intob[i] = i;
  for(int i=0; i<SIZE; i++) cout << intob[i] << endl;
   
  for(int i=0; i<SIZE; i++) doubleob[i] = (double) i/3;
  for(int i=0; i<SIZE; i++) cout << doubleob[i] << endl;
   
  return 0;
}
