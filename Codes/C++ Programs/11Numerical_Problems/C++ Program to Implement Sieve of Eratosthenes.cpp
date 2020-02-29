/*This C++ program to implement Sieve of Eratosthenes. The program initializes an integer array with all the elements initialized to 0. Then the algorithm follows where the each non-prime element’s index is marked as 1 inside the nested loops. The prime numbers are those whose value of index is marked as 0.*/

/*
 * C++ Program to implement Sieve of Eratosthenes
 */

#include <iostream>
const int len = 100;

int main()
{
    int arr[100] = {0};
    for (int i = 2; i < 100; i++)
        {
            for (int j = i * i; j < 100; j+=i)
                {
                    arr[j - 1] = 1;
                }
        }
    for (int i = 1; i < 100; i++)
        {
            if (arr[i - 1] == 0)
                std::cout << i << "\t";
        }
}

/*
1       2       3       5       7       11      13      17      19      23
29      31      37      41      43      47      53      59      61      67
71      73      79      83      89      97