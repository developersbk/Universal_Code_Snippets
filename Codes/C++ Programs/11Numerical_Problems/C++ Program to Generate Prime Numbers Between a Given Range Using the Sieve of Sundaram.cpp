#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to the Sieve of Sundaram\n" << endl;
    int arraySize;
    int numberPrimes = 0;
    cout << "Input a positive integer to find all the prime numbers up to and "
         << "\nincluding that number: ";
    cin >> arraySize;
    int n = arraySize / 2;
    /* array to start off with that will eventually get
     all the composite numbers removed and the remaining
     ones output to the screen                        */
    int isPrime[arraySize + 1];
    for (int i = 0; i < n; ++i)
        {
            isPrime[i] = i;
        }
    for (int i = 1; i < n; i++)
        {
            for (int j = i; j <= (n - i) / (2 * i + 1); j++)
                {
                    isPrime[i + j + 2 * i * j] = 0;/*From this list, remove all
             numbers of the form i + j + 2ij    */
                }
        }
    int TheseArePrime = 0;
    if (arraySize > 2)
        {
            isPrime[TheseArePrime++] = 2;/*this IF statement adds 2 to the output     */
        }
    for (int i = 1; i < n; i++)
        {
            if (isPrime[i] != 0)
                {
                    isPrime[TheseArePrime++] = i * 2 + 1;
                }
        }
    int size = sizeof isPrime / sizeof(int);//total size of array/size of array data type
    for (int x = 0; x <= size; x++)
        {
            if (isPrime[x] != 0)
                {
                    cout << isPrime[x] << "\t";//outputs all prime numbers found
                    numberPrimes++;// the counter of the number of primes found
                }
            else
                {
                    break;
                }
        }
    cout << "\nNumber of Primes: " << numberPrimes << endl;
    return 0;
}

/*
Welcome to the Sieve of Sundaram

Input a positive integer to find all the prime numbers up to and
including that number: 10
2   3   5   7
Number of Primes: 4

Welcome to the Sieve of Sundaram

Input a positive integer to find all the prime numbers up to and
including that number: 100
2   3   5   7   11  13  17  19  23  29  31  37  41  43  47  53  59  61  67  71  73  79  83  89  97
Number of Primes: 25