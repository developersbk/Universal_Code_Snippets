

Add elements in a list to a set
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

  for (j = set1.begin(); j != set1.end(); ++j)
    cout << *j;


  return 0;
}

/* 
 ATacdehilmnorstvy
 */
