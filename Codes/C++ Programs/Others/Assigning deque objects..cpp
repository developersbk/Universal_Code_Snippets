Assigning deque objects.
#include <iostream>
#include <deque>
using namespace std;

int main()
{
  deque<char> dequeObject1(10), dequeObject2;
  int i;

  for(i = 0; i <10; i++) 
     dequeObject1[i] = i + 'A';
  cout << "Contents of dequeObject1 are: ";
  for(i = 0; i <dequeObject1.size(); i++)
    cout << dequeObject1[i];
  cout << "\n\n";

  // assign one deque to another
  dequeObject2 = dequeObject1;

  cout << "Size of dequeObject2 is " << dequeObject2.size() << endl;
  cout << "Contents of dequeObject2 are: ";
  for(i = 0; i <dequeObject2.size(); i++)
    cout << dequeObject2[i];
  cout << "\n\n";

  dequeObject2.assign(dequeObject1.begin()+2, dequeObject1.end()-2);

  cout << "Size of dequeObject2 is " << dequeObject2.size() << endl;
  cout << "Contents of dequeObject2 are: ";
  for(i = 0; i <dequeObject2.size(); i++)
    cout << dequeObject2[i];
  cout << "\n\n";

  dequeObject2.assign(8, 'X');

  cout << "Size of dequeObject2 is " << dequeObject2.size() << endl;
  cout << "Contents of dequeObject2 are: ";
  for(i = 0; i <dequeObject2.size(); i++)
    cout << dequeObject2[i];

  return 0;
}
