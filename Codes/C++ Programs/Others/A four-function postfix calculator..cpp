A four-function postfix calculator.
#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  stack<double> stackObject;
  double a, b;
  string s;

  do {
    cout << ": ";
    cin >> s;
    switch( s[ 0 ]) {
      case 'q': // quit the calculator
        break;
      case '.': // show top-of-stack
        cout << stackObject.top() << endl;
        break;
      case '+': // add
        if(stackObject.size() < 2) {
          cout << "Operand Missing\n";
          break;
        }

        a = stackObject.top();
        stackObject.pop();
        b = stackObject.top();
        stackObject.pop();
        cout << a + b << endl;
        stackObject.push(a + b);
        break;
      case '-': // subtract
        // see if user entering a negative number
        if(s.size() != 1) {
          // push value onto the stack
          stackObject.push(atof(s.c_str()));        
          break;
        }

        // otherwise, is a subtraction
        if(stackObject.size() < 2) {
          cout << "Operand Missing\n";
          break;
        }

        a = stackObject.top();
        stackObject.pop();
        b = stackObject.top();
        stackObject.pop();
        cout << b - a << endl;
        stackObject.push(b - a);
        break;
      case '*': // multiply
        if(stackObject.size() < 2) {
          cout << "Operand Missing\n";
          break;
        }

        a = stackObject.top();
        stackObject.pop();
        b = stackObject.top();
        stackObject.pop();
        cout << a*b << endl;
        stackObject.push(a*b);
        break;
      case '/': // divide
        if(stackObject.size() < 2) {
          cout << "Operand Missing\n";
          break;
        }

        a = stackObject.top();
        stackObject.pop();
        b = stackObject.top();
        stackObject.pop();
        cout << b/a << endl;
        stackObject.push(b/a);
        break;
      default:      
        // push value onto the stack
        stackObject.push(atof(s.c_str()));        
        break;
    }
  } while(s != "q");

  return 0;
}
