#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void binPacking(int *a, int size, int n)
{
    int binCount = 0;
    int binValues[n];
    for (int i = 0; i < n; i++)
        binValues[i] = size;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            {
                if (binValues[j] - a[i] >= 0)
                    {
                        binValues[j] -= a[i];
                        break;
                    }
            }
    for (int i = 0; i < n; i++)
        if (binValues[i] != size)
            binCount++;
    cout << "Number of bins required using first fit decreasing algorithm is:"
         << binCount;
}

int* sort(int *sequence, int n)
{
    // Bubble Sort descending order
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            if (sequence[j] < sequence[j + 1])
                {
                    sequence[j] = sequence[j] + sequence[j + 1];
                    sequence[j + 1] = sequence[j] - sequence[j + 1];
                    sequence[j] = sequence[j] - sequence[j + 1];
                }
    return sequence;
}

int main(int argc, char **argv)
{
    cout << "BIN - PACKING Algorithm 1D Objects(First Fit Decreasing)";
    cout << "Enter the number of items in Set: ";
    int n;
    cin >> n;
    cout << "Enter " << n << " items:";
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the bin size: ";
    int size;
    cin >> size;
    int *sequence = sort(a, n);
    binPacking(sequence, size, n);
}

/*

BIN - PACKING Algorithm 1D Objects(First Fit Decreasing)Enter the number of items in Set: 9
Enter 9 items:
4
1
2
5
3
2
3
6
3
Enter the bin size: 6
Number of bins required using first fit decreasing algorithm is:5