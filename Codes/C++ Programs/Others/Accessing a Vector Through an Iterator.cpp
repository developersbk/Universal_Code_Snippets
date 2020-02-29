Accessing a Vector Through an Iterator
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
  vector<char> vectorObject(10); 
  vector<char>::iterator p;      // create an iterator
  int i;


  p = vectorObject.begin();
  i = 0;
  while(p != vectorObject.end()) {
    *p = i + 'a';
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
  // change contents of vector
  p = vectorObject.begin();
  while(p != vectorObject.end()) {
    *p = toupper(*p);
    p++;
  }
  // display contents of vector
  cout << "Modified Contents:\n";
  p = vectorObject.begin();
  while(p != vectorObject.end()) {
    cout << *p << " ";
    p++;
  }
  cout << endl;
  return 0;
}
