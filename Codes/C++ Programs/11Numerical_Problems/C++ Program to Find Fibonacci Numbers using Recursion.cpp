/*
 * C++ Program to Find Fibonacci Numbers using Recursion
 */
#include <cstring>
#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;

/*
 * Recursive function to find Fibonnaci Numbers
 */
ll fibo_recur(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibo_recur(n - 1) + fibo_recur(n - 2);;
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
            cout<<fibo_recur(n)<<endl;
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