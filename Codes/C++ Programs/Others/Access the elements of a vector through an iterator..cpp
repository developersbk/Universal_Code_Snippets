Access the elements of a vector through an iterator.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vectorObject(10);
  vector<int>::iterator p; 
  int i;

  p = vectorObject.begin();
  i = 0;
  while(p != vectorObject.end()) {
    *p = i;                
    p++;                   
    i++;
  }

  
  cout << "Original contents:\n";
  p = vectorObject.begin();
  while(p != vectorObject.end()) {
    cout << *p << " ";
    p++;
  }
  cout << "\n\n";


  p = vectorObject.begin();
  while(p != vectorObject.end()) {
    *p = *p * 2;           // change contents of vector
    p++;
  }

  cout << "Modified Contents:\n";
  p = vectorObject.begin();
  while(p != vectorObject.end()) {
    cout << *p << " ";     // display contents of vector
    p++;
  }
  cout << endl;

  return 0;
}
