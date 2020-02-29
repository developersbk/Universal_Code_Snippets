Array class for 10 int value with overloaded functions: +, -, ==
#include <iostream>
using namespace std;

class array {
  int nums[10];
public:
  array();
  void set(int n[10]);
  void show();
  array operator+(array object2);
  array operator-(array object2);
  int operator==(array object2);
};

array::array()
{
  int i;
  for(i = 0; i <10; i++) nums[ i ] = 0;
}  

void array::set(int *n)
{
  int i;
  
  for(i = 0; i <10; i++) nums[ i ] = n[ i ];
}

void array::show()
{
  int i;

  for(i = 0; i <10; i++) 
    cout << nums[ i ] << ' ';

  cout << endl;
}

array array::operator+(array object2)
{
  int i;
  array temp;

  for(i = 0; i <10; i++) 
    temp.nums[ i ] = nums[ i ] + object2.nums[ i ];

  return temp;
}

array array::operator-(array object2)
{
  int i;
  array temp;

  for(i = 0; i <10; i++) 
    temp.nums[ i ] = nums[ i ] - object2.nums[ i ];

  return temp;
}

int array::operator==(array object2)
{
  int i;

  for(i = 0; i <10; i++) 
    if(nums[ i ]!=object2.nums[ i ]) return 0;

  return 1;
}
 
int main()
{
  array object1, object2, object3;

  int i[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  object1.set(i);
  object2.set(i);

  object3 = object1 + object2;
  object3.show();

  object3 = object1 - object3;
  object3.show();

  if(object1==object2)
     cout << "object1 equals object2\n";
  else 
     cout << "object1 does not equal object2\n";

  if(object1==object3) 
     cout << "object1 equals object3\n";
  else 
     cout << "object1 does not equal object3\n";

  return 0;
}
