Add elements in a set to a list
#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <set>
using namespace std;

int main()
{
  string s("There is no distinctly native American criminal class");


  list<char> list1(s.begin(), s.end());

  // Put the characters in list1 into set1:
  set<char> set1;
  list<char>::iterator i;

  for (i = list1.begin(); i != list1.end(); ++i)
    set1.insert(*i);

  set<char>::iterator j;

  list<char> list2;
  set<char>::iterator k;
  for (k = set1.begin(); k != set1.end(); ++k)
    list2.push_back(*k);


  for (i = list2.begin(); i != list2.end(); ++i)
    cout << *i;

  return 0;
}

/* 
 ATacdehilmnorstvy
 */
