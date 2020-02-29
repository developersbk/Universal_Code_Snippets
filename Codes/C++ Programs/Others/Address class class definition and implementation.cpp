Address class: class definition and implementation
#include <iostream>
#include <cstring>
using namespace std;

class Address {
  char name[40];
  char street[40];
  char city[30];
  char state[3];
  char zip[10];
public:
  void store(char *n, char *s, char *c, char *t, char *z);
  void display();
};

void Address::store(char *n, char *s, char *c, char *t, char *z)
{
  strcpy(name, n);
  strcpy(street, s);
  strcpy(city, c);
  strcpy(state, t);
  strcpy(zip, z);
}

void Address::display()
{
  cout << name << endl;
  cout << street << endl;
  cout << city << endl;
  cout << state << endl;
  cout << zip << endl;
}

int main()
{
  Address a;

  a.store("C", "11 Lane", "W", "In", "4");

  a.display();

  return 0;
}
