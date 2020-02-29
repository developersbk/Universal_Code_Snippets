/*This C++ Program implements Selection Sort Algorithm.
Selection sort is a in-place comparison sort. The sorted array is built from left to right. The algorithm finds the the index value or position of the minimum element present in the array. Initially it assume the first element of the array. Then it loops over the array and find if present the index or position of value less than the minimum taken previously. After this it swaps those values, giving us the output in sorted order

It’s time complexity is O(n^2) with theta (n) swaps.*/

//This is a C++ Program to Sort an Array using Selection Sort

#include <iostream>
using namespace std;

void print (int [], int);
void selection_sort (int [], int);

//Driver Function
int main ()
{
    int min_ele_loc;
    int ar[] = {10, 2, 45, 18, 16, 30, 29, 1, 1, 100};
    cout << "Array initially : ";
    print (ar, 10);
    selection_sort (ar, 10);
    cout << "Array after selection sort : ";
    print (ar, 10);
    return 0;
}

// Selection Sort
void selection_sort (int ar[], int size)
{
    int min_ele_loc;
    for (int i = 0; i < 9; ++i)
        {
            //Find minimum element in the unsorted array
            //Assume it's the first element
            min_ele_loc = i;
            //Loop through the array to find it
            for (int j = i + 1; j < 10; ++j)
                {
                    if (ar[j] < ar[min_ele_loc])
                        {
                            //Found new minimum position, if present
                            min_ele_loc = j;
                        }
                }
            //Swap the values
            swap (ar[i], ar[min_ele_loc]);
        }
}

//Print the array
void print (int temp_ar[], int size)
{
    for (int i = 0; i < size; ++i)
        {
            cout << temp_ar[i] << " ";
        }
    cout << endl;
}

/*
Array intially : 10 2 45 18 16 30 29 1 1 100
Array after selection sort : 1 1 2 10 16 18 29 30 45 100