/*
 * C++ Program to Find Fibonacci Numbers using Iteration
 */
#include <cstring>
#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;

/*
 * Iterative function to find Fibonacci Numbers
 */
ll fibo_iter(int n)
{
    int previous = 1;
    int current = 1;
    int next = 1;
    for (int i = 3; i <= n; ++i)
        {
            next = current + previous;
            previous = current;
            current = next;
        }
    return next;
}
/*
 * Main
 */
int main()
{
    int n;
    while (1)
        {
            cout<<"Enter the integer n to find nth fibonnaci no.(0 to exit): ";
            cin>>n;
            if (n == 0)
                break;
            cout<<fibo_iter(n)<<endl;
        }
    return 0;
}

/*
Enter the integer n to find nth fibonnaci no.(0 to exit): 1
1
Enter the integer n to find nth fibonnaci no.(0 to exit): 2
1
Enter the integer n to find nth fibonnaci no.(0 to exit): 3
2
Enter the integer n to find nth fibonnaci no.(0 to exit): 4
3
Enter the integer n to find nth fibonnaci no.(0 to exit): 5
5
Enter the integer n to find nth fibonnaci no.(0 to exit): 6
8
Enter the integer n to find nth fibonnaci no.(0 to exit): 7
13
Enter the integer n to find nth fibonnaci no.(0 to exit): 8
21
Enter the integer n to find nth fibonnaci no.(0 to exit): 9
34
Enter the integer n to find nth fibonnaci no.(0 to exit): 10
55
Enter the integer n to find nth fibonnaci no.(0 to exit): 0

------------------
(program exited with code: 1)
Press return to continue