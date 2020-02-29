A map of word opposites, using strings.
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
  map<string, string> mapObject;
  int i;

  mapObject.insert(pair<string, string>("yes", "no"));
  mapObject.insert(pair<string, string>("up", "down"));
  mapObject.insert(pair<string, string>("left", "right"));
  mapObject.insert(pair<string, string>("good", "bad"));

  string s;
  cout << "Enter word: ";
  cin >> s;

  map<string, string>::iterator p;
  
  p = mapObject.find(s);
  if(p != mapObject.end()) 
    cout << "Opposite: " << p->second;
  else
    cout << "Word not in map.\n";

  return 0;
}
