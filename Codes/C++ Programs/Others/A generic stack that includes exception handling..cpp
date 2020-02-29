A generic stack that includes exception handling.
#include <iostream>
using namespace std;

#define SIZE 10

template <class StackType> class stack {
  StackType stck[SIZE]; 
  int topOfStack;       

public:
  void init() { 
     topOfStack = 0; 
  } 
  void push(StackType ch); 
  StackType pop();         
};

template <class StackType>
void stack<StackType>::push(StackType ob)
{
  try {
    if(topOfStack==SIZE) throw SIZE;
  } catch(int) {
    cout << "Stack is full.\n";
    return;
  }
  stck[topOfStack] = ob;
  topOfStack++;
}

template <class StackType> 
StackType stack<StackType>::pop()
{
  try {
    if( topOfStack == 0) 
      throw 0;
  } catch(int) {
    cout << "Stack is empty.\n";
    return 0;              
  }
  topOfStack--;
  return stck[topOfStack];
}

int main()
{
  stack<char> stack1, stack2;  
  int i;

  stack1.init();
  stack2.init();

  stack1.push('a');
  stack2.push('x');
  stack1.push('b');
  stack2.push('y');
  stack1.push('c');
  stack2.push('z');

  for(i = 0; i <3; i++) 
     cout << "Pop stack1: " << stack1.pop() << endl;
  for(i = 0; i <4; i++) 
     cout << "Pop stack2: " << stack2.pop() << endl;

  // demonstrate double stacks
  stack<double> doubleValueStack1, doubleValueStack2;  // create two stacks

  // initialize the stacks
  doubleValueStack1.init();
  doubleValueStack2.init();

  doubleValueStack1.push(1.1);
  doubleValueStack2.push(2.2);
  doubleValueStack1.push(3.3);
  doubleValueStack2.push(4.4);
  doubleValueStack1.push(5.5);
  doubleValueStack2.push(6.6);

  for(i = 0; i <3; i++) 
     cout << "Pop doubleValueStack1: " << doubleValueStack1.pop() << endl;
  for(i = 0; i <4; i++) 
     cout << "Pop doubleValueStack2: " << doubleValueStack2.pop() << endl;

  return 0;
}
