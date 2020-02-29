/*
 * C++ Program to Find Factorial of Large Numbers
 */
#include <cstring>
#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;

int fact[101][200] = {0};

/*
 * Find Factorial of Large Numbers
 * fact[i][0] is used to store the number of digits
 */
void fact_large(int n)
{
    int i;
    fact[1][0] = 1;
    fact[1][1] = 1;
    if (fact[n][0] == 0)
        {
            for (i = n - 1; i > 0 ; i--)
                {
                    if (fact[i][0] != 0)
                        break;
                }
            for ( ; i < n; i++)
                {
                    int j = 1;
                    int carry = 0;
                    int len = fact[i][0];
                    while (len--)
                        {
                            int temp = (i + 1) * fact[i][j] + carry;
                            fact[i + 1][j] = temp % 10;
                            carry = temp / 10;
                            j++;
                        }
                    while (carry > 0)
                        {
                            fact[i + 1][j] = carry % 10;
                            carry /= 10;
                            j++;
                        }
                    fact[i + 1][0] = j - 1;
                }
        }
    for (i = fact[n][0]; i > 0; i--)
        {
            cout << fact[n][i];
        }
    cout<<endl;
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
            fact_large(n);
        }
    return 0;
}

/*
Enter interger to compute factorial(0 to exit): 100
93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000
Enter interger to compute factorial(0 to exit): 50
30414093201713378043612608166064768844377641568960512000000000000
Enter interger to compute factorial(0 to exit): 72
61234458376886086861524070385274672740778091784697328983823014963978384987221689274204160000000000000000
Enter interger to compute factorial(0 to exit): 0

------------------
(program exited with code: 1)
Press return to continue