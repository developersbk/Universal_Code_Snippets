/*This is a C++ Program to generate random numbers using Park-Miller algorithm. A general formula of a random number generator (RNG) of this type is:
X_{k+1} = g X(k) mod n
where the modulus n is a prime number or a power of a prime number, the multiplier g is an element of high multiplicative order modulo n (e.g., a primitive root modulo n), and the seed X0 is co-prime to n.*/

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

const long m = 2147483647L;
const long a = 48271L;
const long q = 44488L;
const long r = 3399L;

static long r_seed = 12345678L;

double uniform()
{
    long hi = r_seed / q;
    long lo = r_seed - q * hi;
    long t = a * lo - r * hi;
    if (t > 0)
        r_seed = t;
    else
        r_seed = t + m;
    return r_seed;
}

int main(int argc, char **argv)
{
    double A[10];
    for (int i = 0; i < 10; i++)
        A[i] = uniform();
    cout<<"Random numbers are:\n";
    for (int i = 0; i < 10; i++)
        cout << A[i]<<endl;
}

/*
Random numbers are:
1.08525e+009
5.0826e+008
1.35229e+009
1.56324e+009
8.90733e+008
1.81003e+009
1.50959e+009
8.62973e+008
1.85299e+009
6.77684e+008