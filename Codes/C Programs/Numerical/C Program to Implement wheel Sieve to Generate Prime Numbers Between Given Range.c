#include <stdio.h>
#include <malloc.h>

#define MAX_NUM 50
// array will be initialized to 0 being global
int primes[MAX_NUM];

void gen_sieve_primes(void)
{
    int p;
    // mark all multiples of prime selected above as non primes
    int c = 2;
    int mul = p * c;
    for (p = 2; p < MAX_NUM; p++) // for all elements in array
        {
            if (primes[p] == 0) // it is not multiple of any other prime
                primes[p] = 1; // mark it as prime
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
    int c = 0, i;
    for (i = 0; i < MAX_NUM; i++)
        {
            if (primes[i] == 1)
                {
                    c++;
                    if (c < 4)
                        {
                            switch (c)
                                {
                                case 1:
                                    printf("%d st prime is: %d\n", c, i);
                                    break;
                                case 2:
                                    printf("%d nd prime is: %d\n", c, i);
                                    break;
                                case 3:
                                    printf("%d rd prime is: %d\n", c, i);
                                    break;
                                default:
                                    break;
                                }
                        }
                    else
                        printf("%d th prime is: %d\n", c, i);
                }
        }
}

int main()
{
    gen_sieve_primes();
    print_all_primes();
    return 0;
}