/*
 * C++ Program to Find Factorial of a Number using Iteration
 */
#include <cstring>
#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;
/*
 * Find Factorial of a Number using Iteration
 */
ll fact_iter(int n)
{
    ll result = 1;
    for (int i = 1; i <= n; i++)
        {
            result *= i;
        }
    return result;
}
/*
 * Main
 */
int main()
{
    int n;
    while (1)
        {
            cout<<"Enter interger to compute factorial(0 to exit): ";
            cin>>n;
            if (n == 0)
                break;
            cout<<fact_iter(n)<<endl;
        }
    return 0;
}

/*
Enter interger to compute factorial(0 to exit): 10
3628800
Enter interger to compute factorial(0 to exit): 20
2432902008176640000
Enter interger to compute factorial(0 to exit): 15
1307674368000
Enter interger to compute factorial(0 to exit): 0

------------------
(program exited with code: 1)
Press return to continue