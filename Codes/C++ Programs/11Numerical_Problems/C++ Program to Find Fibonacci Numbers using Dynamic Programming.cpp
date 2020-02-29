/*
 * C++ Program to Find Fibonacci Numbers using Dynamic Programming
 */
#include <cstring>
#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;

ll fib[1000] = {0};
/*
 * Fibonacci Numbers using Dp
 */
ll fibo_dp(int n)
{
    fib[1] = 1;
    fib[2] = 1;
    if (fib[n] == 0)
        {
            for (int j = 3; j <= n; ++j)
                {
                    if (fib[n] == 0)
                        fib[j] = fib[j - 1] + fib[j - 2];
                    else
                        continue;
                }
        }
    return fib[n];
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
            cout<<fibo_dp(n)<<endl;
        }
    return 0;
}

/*
Enter the integer n to find nth fibonnaci no.(0 to exit): 10
55
Enter the integer n to find nth fibonnaci no.(0 to exit): 9
34
Enter the integer n to find nth fibonnaci no.(0 to exit): 8
21
Enter the integer n to find nth fibonnaci no.(0 to exit): 7
13
Enter the integer n to find nth fibonnaci no.(0 to exit): 6
8
Enter the integer n to find nth fibonnaci no.(0 to exit): 5
5
Enter the integer n to find nth fibonnaci no.(0 to exit): 4
3
Enter the integer n to find nth fibonnaci no.(0 to exit): 3
2
Enter the integer n to find nth fibonnaci no.(0 to exit): 2
1
Enter the integer n to find nth fibonnaci no.(0 to exit): 0

------------------
(program exited with code: 1)
Press return to continue