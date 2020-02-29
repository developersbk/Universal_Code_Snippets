/*
 * C++ Program to Find Fibonacci Numbers using Matrix Exponentiation
 */
#include <cstring>
#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;

/*
 * function to multiply two matrices
 */
void multiply(ll F[2][2], ll M[2][2])
{
    ll x =  F[0][0] * M[0][0] + F[0][1] * M[1][0];
    ll y =  F[0][0] * M[0][1] + F[0][1] * M[1][1];
    ll z =  F[1][0] * M[0][0] + F[1][1] * M[1][0];
    ll w =  F[1][0] * M[0][1] + F[1][1] * M[1][1];
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

/*
 * function to calculate power of a matrix
 */
void power(ll F[2][2], int n)
{
    if (n == 0 || n == 1)
        return;
    ll M[2][2] = {{1,1},{1,0}};
    power(F, n / 2);
    multiply(F, F);
    if (n % 2 != 0)
        multiply(F, M);
}

/*
 * function that returns nth Fibonacci number
 */
ll fibo_matrix(ll n)
{
    ll F[2][2] = {{1,1},{1,0}};
    if (n == 0)
        return 0;
    power(F, n - 1);
    return F[0][0];
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
            cout<<fibo_matrix(n)<<endl;
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