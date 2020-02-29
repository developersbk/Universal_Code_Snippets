#include <stdio.h>

int main()
{
    int arraySize, i, j, x;
    int numberPrimes = 0;
    printf("Input a positive integer to find all the prime numbers up to and including that number: ");
    scanf("%d", &arraySize);
    int n = arraySize / 2;
    int size;
    /* array to start off with that will eventually get
     all the composite numbers removed and the remaining
     ones output to the screen                        */
    int isPrime[arraySize + 1];
    int TheseArePrime = 0;
    for (i = 0; i < n; ++i)
        {
            isPrime[i] = i;
        }
    for (i = 1; i < n; i++)
        {
            for (j = i; j <= (n - i) / (2 * i + 1); j++)
                {
                    isPrime[i + j + 2 * i * j] = 0;/*From this list, remove all
             numbers of the form i + j + 2ij    */
                }
        }
    if (arraySize > 2)
        {
            isPrime[TheseArePrime++] = 2;/*this IF statement adds 2 to the output     */
        }
    for (i = 1; i < n; i++)
        {
            if (isPrime[i] != 0)
                {
                    isPrime[TheseArePrime++] = i * 2 + 1;
                }
        }
    size = sizeof isPrime / sizeof(int);//total size of array/size of array data type
    for (x = 0; x <= size; x++)
        {
            if (isPrime[x] != 0)
                {
                    printf("%d \t", isPrime[x]);
                    numberPrimes++;// the counter of the number of primes found
                }
            else
                {
                    break;
                }
        }
    printf("\nNumber of Primes: %d", numberPrimes);
    return 0;
}