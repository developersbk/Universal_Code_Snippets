A map of opposites.
#include <iostream>
#include <map>
#include <cstring>
using namespace std;

class StringClass {
  char str[20];
public:
  StringClass() { 
     strcpy(str, ""); 
  }
  StringClass(char *s) { 
     strcpy(str, s); 
  }
  char *get() { 
     return str; 
  }
};

// must define less than relative to StringClass objects
bool operator<(StringClass a, StringClass b)
{
   return strcmp(a.get(), b.get()) < 0;
}

class opposite {
  char str[20];
public:
  opposite() { 
     strcmp(str, ""); 
  }
  opposite(char *s) { 
     strcpy(str, s); 
  }
  char *get() { 
     return str; 
  }
};


int main()
{
  map<StringClass, opposite> mapObject;

  mapObject.insert(pair<StringClass, opposite>(StringClass("yes"), opposite("no")));
  mapObject.insert(pair<StringClass, opposite>(StringClass("good"), opposite("bad")));
  mapObject.insert(pair<StringClass, opposite>(StringClass("left"), opposite("right")));
  mapObject.insert(pair<StringClass, opposite>(StringClass("up"), opposite("down")));

  char str[80];
  cout << "Enter word: ";
  cin >> str;

  map<StringClass, opposite>::iterator p;
  
  p = mapObject.find(StringClass(str));
  if(p != mapObject.end()) 
    cout << "Opposite: " <<  p->second.get();
  else
    cout << "Word not in map.\n";

  return 0;
}
