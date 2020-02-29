A simple map: char and int
#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<char, int> mapObject;
  int i;

  for(i = 0; i <26; i++) {
    mapObject.insert(pair<char, int>('A'+i, 65+i));
  }

  char ch;
  cout << "Enter key: ";
  cin >> ch;

  map<char, int>::iterator p;
  
  p = mapObject.find(ch);
  if(p != mapObject.end()) 
    cout << "Its ASCII value is  " << p->second;
  else
    cout << "Key not in map.\n";

  return 0;
}
