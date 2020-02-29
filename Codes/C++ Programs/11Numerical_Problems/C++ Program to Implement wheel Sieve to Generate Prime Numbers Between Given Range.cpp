/*This is a C++ Program to find prime number between a given range using Wheel Seive method. Wheel factorization is a graphical method for manually performing a preliminary to the Sieve of Eratosthenes that separates prime numbers from composites. Start by writing the natural numbers around circles as shown below. Prime numbers in the innermost circle have their multiples in similar positions as themselves in the other circles, forming spokes of primes and their multiples. Multiples of the prime numbers in the innermost circle form spokes of composite numbers in the outer circles.*/

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

#define MAX_NUM 50
// array will be initialized to 0 being global
int primes[MAX_NUM];

void gen_sieve_primes(void)
{
    for (int p = 2; p < MAX_NUM; p++) // for all elements in array
        {
            if (primes[p] == 0) // it is not multiple of any other prime
                primes[p] = 1; // mark it as prime
            // mark all multiples of prime selected above as non primes
            int c = 2;
            int mul = p * c;
            for (; mul < MAX_NUM;)
                {
                    primes[mul] = -1;
                    c++;
                    mul = p * c;
                }
        }
}

void print_all_primes()
{
    int c = 0;
    for (int i = 0; i < MAX_NUM; i++)
        {
            if (primes[i] == 1)
                {
                    c++;
                    if (c < 4)
                        {
                            switch (c)
                                {
                                case 1:
                                    cout << c << "st prime is: " << i << endl;
                                    break;
                                case 2:
                                    cout << c << "nd prime is: " << i << endl;
                                    break;
                                case 3:
                                    cout << c << "rd prime is: " << i << endl;
                                    break;
                                default:
                                    break;
                                }
                        }
                    else
                        cout << c << "th prime is: " << i << endl;
                }
        }
}

int main()
{
    gen_sieve_primes();
    print_all_primes();
    return 0;
}

/*
1st prime is: 2
2nd prime is: 3
3rd prime is: 5
4th prime is: 7
5th prime is: 11
6th prime is: 13
7th prime is: 17
8th prime is: 19
9th prime is: 23
10th prime is: 29
11th prime is: 31
12th prime is: 37
13th prime is: 41
14th prime is: 43
15th prime is: 47