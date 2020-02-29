A list splicing example.
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  list<string> sentence;
  list<string> phrase;
  list<string>::iterator p;
  
  string s1[] = {"A", "B", ""};
  string s2[] = {"C", "D", ""};
  string s3[] = {"E", "F", "G.", ""};
  string s4[] = {"A", "C,", "E", "G", ""};
  int i;

  for(i = 0; s1[ i ] != ""; i++)
    sentence.push_back(s1[i]);


  for(i = 0; s2[ i ] != ""; i++)
    phrase.push_back(s2[ i ]);

  cout << "Original sentence:\n";
  p = sentence.begin();
  while(p != sentence.end())
    cout << *p++ << " ";
  cout << endl;

  sentence.splice(sentence.begin(), phrase);

  cout << "Sentence after splicing at the front:\n";
  p = sentence.begin();
  while(p != sentence.end())
    cout << *p++ << " ";
  cout << endl;

  for(i = 0; s3[ i ] != ""; i++)
    phrase.push_back(s3[ i ]);

  sentence.splice(sentence.end(), phrase);

  cout << "Sentence after splicing at the end:\n";
  p = sentence.begin();
  while(p != sentence.end())
    cout << *p++ << " ";
  cout << endl;

  for(i = 0; s4[ i ] != ""; i++)
    phrase.push_back(s4[ i ]);


  p = find(sentence.begin(), sentence.end(), "or");
  sentence.splice(p, phrase);

  cout << "Sentence after splicing in the middle:\n";
  p = sentence.begin();
  while(p != sentence.end())
    cout << *p++ << " ";

  return 0;
}
