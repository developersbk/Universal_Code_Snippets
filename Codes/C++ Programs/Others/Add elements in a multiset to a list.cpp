Add elements in a multiset to a list
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

  // Put the characters in list1 into multiset1:
  multiset<char> multiset1;
  list<char>::iterator i;
  for (i = list1.begin(); i != list1.end(); ++i)
    multiset1.insert(*i);

  // Put the characters in multiset1 into list2:
  list<char> list2;
  multiset<char>::iterator k;
  for (k = multiset1.begin(); k != multiset1.end(); ++k)
    list2.push_back(*k);


  for (i = list2.begin(); i != list2.end(); ++i)
    cout << *i;

  return 0;
}

/* 
       ATaaaaccccdeeeehiiiiiiilllmmnnnnnorrrsssstttvy"
 */
