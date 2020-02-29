/*
 * C++ Program to Implement Sieve of Atkins
 */
#include <iostream>
#include <cmath>
#include <vector>
#define ll long long

using namespace std;

/*
 * Sieve of Atkins
 */
void sieve_atkins(ll int n)
{
    vector<bool> is_prime(n + 1);
    is_prime[2] = true;
    is_prime[3] = true;
    for (ll int i = 5; i <= n; i++)
        {
            is_prime[i] = false;
        }
    ll int lim = ceil(sqrt(n));
    for (ll int x = 1; x <= lim; x++)
        {
            for (ll int y = 1; y <= lim; y++)
                {
                    ll int num = (4 * x * x + y * y);
                    if (num <= n && (num % 12 == 1 || num % 12 == 5))
                        {
                            is_prime[num] = true;
                        }
                    num = (3 * x * x + y * y);
                    if (num <= n && (num % 12 == 7))
                        {
                            is_prime[num] = true;
                        }
                    if (x > y)
                        {
                            num = (3 * x * x - y * y);
                            if (num <= n && (num % 12 == 11))
                                {
                                    is_prime[num] = true;
                                }
                        }
                }
        }
    for (ll int i = 5; i <= lim; i++)
        {
            if (is_prime[i])
                {
                    for (ll int j = i * i; j <= n; j += i)
                        {
                            is_prime[j] = false;
                        }
                }
        }
    for (ll int i = 2; i <= n; i++)
        {
            if (is_prime[i])
                {
                    cout<<i<<"\t";
                }
        }
}

/*
 * Main
 */
int main()
{
    ll int n;
    n = 300;
    cout<<"Following are the prime numbers below "<<n<<endl;
    sieve_atkins(n);
    cout<<endl;
    return 0;
}

/*
Following are the prime numbers below 300
2       3       5       7       11      13      17      19      23      29
31      37      41      43      47      53      59      61      67      71
73      79      83      89      97      101     103     107     109     113
127     131     137     139     149     151     157     163     167     173
179     181     191     193     197     199     211     223     227     229
233     239     241     251     257     263     269     271     277     281
283     293

------------------
(program exited with code: 1)
Press return to continue
