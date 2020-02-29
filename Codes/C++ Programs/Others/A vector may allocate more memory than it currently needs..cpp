A vector may allocate more memory than it currently needs.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<char> vectorObject(10);

  cout << "Initial size: " << vectorObject.size() << endl;
  cout << "Initial capacity: " << vectorObject.capacity();
  cout << "\n\n";
 
  vectorObject.push_back('X');

  cout << "Size after push_back: " << vectorObject.size() << endl;
  cout << "New capacity: " << vectorObject.capacity();
  cout << "\n\n";

  vectorObject.resize(100);

  cout << "Size after resize: " << vectorObject.size() << endl;
  cout << "Capacity after resize: " << vectorObject.capacity();
  cout << "\n\n";

  vectorObject.push_back('Y');

  cout << "Size after push_back: " << vectorObject.size() << endl;
  cout << "New capacity: " << vectorObject.capacity();
  cout << "\n\n";

  return 0;
}
