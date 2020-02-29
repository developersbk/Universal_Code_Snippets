/*This C++ Program implements Shell Sort Algorithm.
Shell sort is a sorting algorithm. It is an in-place comparison sort and one of the oldest sorting algorithm.
Shell sort is a generalization of insertion sort that allows the exchange of items that are far apart. Shell sort is not stable sort. It takes O(1) extra space. The worst case time complexity of shell sort depends on the increment sequence.

Shell sort steps are :
1. Compare elements that are far apart.
2. Compare elements that are less far apart. Narrower array.
3. Do this repeatedly, reach to a point where compare adjancent elements.
4. Now the elements will be sufficiently sorted that the running time of the final stage will be closer to O(N).

It is also called diminishing increment sort.

The program has an input array of size 10 initialized with 10 values. This returns the array in non decreasing order using Shell Sort algorithm.*/

//This is a C++  Program to Sort an Array using Shell Sort
#include <iostream>
using namespace std;

//Print values
void print_ar (int ar[], int size)
{
    for (int i = 0; i < size; ++i)
        {
            cout << ar[i] << " ";
        }
    cout << endl;
}

//Shell sort function
void shell_sort (int ar[], int size)
{
    int j;
    //Narrow the array by 2 everytime
    for (int gap = size / 2; gap > 0; gap /= 2)
        {
            for (int i = gap; i < size; ++i)
                {
                    int temp = ar[i];
                    for (j = i; j >= gap && temp < ar[j - gap]; j -= gap)
                        {
                            ar[j] = ar[j - gap];
                        }
                    ar[j] = temp;
                }
        }
}

//Driver Functions
int main ()
{
    int ar[] = {1, 4, 16, 30, 29, 18, 100, 2, 43, 1};
    cout << "Intial Array : ";
    print_ar (ar, 10);
    shell_sort (ar, 10);
    cout << "Sorted Array : ";
    print_ar (ar, 10);
    return 0;
}

/*


Intial Array : 1 4 16 30 29 18 100 2 43 1
Sorted Array : 1 1 2 4 16 18 29 30 43 100