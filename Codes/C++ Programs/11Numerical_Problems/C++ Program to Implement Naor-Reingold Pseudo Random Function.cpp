/*This is a C++ Program to genrate random numbers using Naor-Reingold random function. Moni Naor and Omer Reingold described efficient constructions for various cryptographic primitives in private key as well as public-key cryptography. Their result is the construction of an efficient pseudorandom function. Let p and l be prime numbers with l |p-1. Select an element g ? {\mathbb F_p}^* of multiplicative order l. Then for each n-dimensional vector a = (a1, …, an)? (\mathbb F_{l})^{n} they define the function
f_{a}(x) = g^{a_{1}^{x_{1}} a_{2}^{x_{2}}…a_{n}^{x_{n}}} \in \mathbb F_p

where x = x1 … xn is the bit representation of integer x, 0 = x = 2^n-1, with some extra leading zeros if necessary.*/

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
    int p = 7, l = 3, g = 2, n = 4, x;
    int a[] = { 1, 2, 2, 1 };
    int bin[4];
    cout << "The Random numbers are: ";
    for (int i = 0; i < 10; i++)
        {
            x = rand() % 16;
            for (int j = 3; j >= 0; j--)
                {
                    bin[j] = x % 2;
                    x /= 2;
                }
            int mul = 1;
            for (int k = 0; k < 4; k++)
                mul *= pow(a[k], bin[k]);
            cout << pow(g, mul)<<" ";
        }
}

/*
The Random numbers are:
2 4 16 4 2 4 16 16 4 2