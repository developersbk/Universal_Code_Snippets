/*This is a C++ Program to shuffle array using Fisher-Yates algorithm. The Fisher–Yates shuffle (named after Ronald Fisher and Frank Yates), also known as the Knuth shuffle (after Donald Knuth), is an algorithm for generating a random permutation of a finite set—in plain terms, for randomly shuffling the set. A variant of the Fisher–Yates shuffle, known as Sattolo’s algorithm, may be used to generate random cycles of length n instead. The Fisher–Yates shuffle is unbiased, so that every permutation is equally likely. The modern version of the algorithm is also rather efficient, requiring only time proportional to the number of items being shuffled and no additional storage space.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void fisherYatesShuffling(int *arr, int n)
{
    int a[n];
    int ind[n];
    for (int i = 0; i < n; i++)
        ind[i] = 0;
    int index;
    for (int i = 0; i < n; i++)
        {
            do
                {
                    index = rand() % n;
                }
            while (ind[index] != 0);
            ind[index] = 1;
            a[i] = *(arr + index);
        }
    for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
}

int main(int argc, char **argv)
{
    cout << "Enter the array size: ";
    int n;
    cin >> n;
    cout << "Enter the array elements: ";
    int a[n];
    for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    fisherYatesShuffling(a, n);
}

/*
Enter the array size: 7
Enter the array elements: 12 23 34 45 56 67 78
78 23 67 45 34 12 56