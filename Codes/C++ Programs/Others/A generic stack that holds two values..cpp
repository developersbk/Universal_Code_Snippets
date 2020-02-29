A generic stack that holds two values.
#include <iostream>
using namespace std;

#define SIZE 10

template <class StackType> class stack {
  StackType stck[SIZE][2]; 
  int topOfStack;          

public:
  void init() { topOfStack = 0; } 
  void push(StackType ob, StackType object2); 
  StackType pop(StackType &object2); 
};

template <class StackType>
void stack<StackType>::push(StackType ob, StackType object2)
{
  if(topOfStack==SIZE) {
    cout << "Stack is full.\n";
    return;
  }
  stck[topOfStack][0] = ob;
  stck[topOfStack][1] = object2;
  topOfStack++;
}

template <class StackType> 
StackType stack<StackType>::pop(StackType &object2)
{
  if(topOfStack==0) {
    cout << "Stack is empty.\n";
    return 0; 
  }
  topOfStack--;
  object2 = stck[topOfStack][1];
  return stck[topOfStack][0];
}

int main()
{
  stack<char> stack1, stackObject2;
  int i;
  char ch;

  stack1.init();
  stackObject2.init();

  stack1.push('a', 'b');
  stackObject2.push('x', 'z');
  stack1.push('b', 'd');
  stackObject2.push('y', 'e');
  stack1.push('c', 'a');
  stackObject2.push('z', 'x');

  for(i = 0; i <3; i++) {
    cout << "Pop stack1: " << stack1.pop(ch);
    cout << ' ' << ch << endl;
  }
  for(i = 0; i <3; i++) {
    cout << "Pop stackObject2: " << stackObject2.pop(ch);
    cout << ' ' << ch << endl;
  }

  // demonstrate double stacks
  stack<double> doubleValueStack1, doubleValueStack2;  // create two stacks
  double d;

  doubleValueStack1.init();
  doubleValueStack2.init();

  doubleValueStack1.push(1.1, 2.0);
  doubleValueStack2.push(2.2, 3.0);
  doubleValueStack1.push(3.3, 4.0);
  doubleValueStack2.push(4.4, 5.0);
  doubleValueStack1.push(5.5, 6.0);
  doubleValueStack2.push(6.6, 7.0);

  for(i = 0; i <3; i++) {
    cout << "Pop doubleValueStack1: " << doubleValueStack1.pop(d);
    cout << ' '<< d << endl;
  }

  for(i = 0; i <3; i++) {
    cout << "Pop doubleValueStack2: " << doubleValueStack2.pop(d);
    cout << ' '<< d << endl;
  }

  return 0;
}
