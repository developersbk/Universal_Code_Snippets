/*This is a C++ Program to implement Bin packing algorithm. This is a sample program to illustrate the Bin-Packing algorithm using next fit heuristics. In the bin packing problem, objects of different volumes must be packed into a finite number of bins or containers each of volume V in a way that minimizes the number of bins used. In computational complexity theory, it is a combinatorial NP-hard problem.
There are many variations of this problem, such as 2D packing, linear packing, packing by weight, packing by cost, and so on. They have many applications, such as filling up containers, loading trucks with weight capacity constraints, creating file backups in media and technology mapping in Field-programmable gate array semiconductor chip design.

The bin packing problem can also be seen as a special case of the cutting stock problem. When the number of bins is restricted to 1 and each item is characterised by both a volume and a value, the problem of maximising the value of items that can fit in the bin is known as the knapsack problem.*/

#include<iostream>

using namespace std;

void binPacking(int *a, int size, int n)
{
    int binCount = 1;
    int s = size;
    for (int i = 0; i < n; i++)
        {
            if (s - *(a + i) > 0)
                {
                    s -= *(a + i);
                    continue;
                }
            else
                {
                    binCount++;
                    s = size;
                    i--;
                }
        }
    cout << "Number of bins required: " << binCount;
}

int main(int argc, char **argv)
{
    cout << "BIN - PACKING Algorithm\n";
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
    binPacking(a, size, n);
}

/*
BIN - PACKING Algorithm
Enter the number of items in Set: 5
Enter 5 items:12 23 34 45 56
Enter the bin size: 70
Number of bins required: 3