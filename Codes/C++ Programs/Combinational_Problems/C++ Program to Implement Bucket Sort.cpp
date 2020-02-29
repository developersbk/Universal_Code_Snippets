/*This C++ Program implements Bucket Sort Algorithm.
Bucket sort is a sorting algorithm. It partitions an array into number of buckets, sorting each bucket individually using any good sorting algorithm and then concatenating each bucket.

The basic steps of Bucket Sort are :
1. Set up buckets
2. Scatter original array
3. Sort each bucket
4. Gather all elements

Bucket sort excepts it’s input in a specific range. The size of bucket should be taken as 1 greater than the largest element in the bucket.

It’s worst case time complexity is O(n^2) and space complexity is O(n.m), which occurs when every element of input array is in one bucket. Average case time complexity is O(n + m), m is the number of buckets.*/

//This is a C++ Program to Sort an Array using Bucket Sort
#include <iostream>
using namespace std;

//Bucket Sort
void bucket_sort (int arr[], int n)
{
    //Here range is [1,100]
    int m = 101;
    //Create m empty buckets
    int buckets[m];
    //Intialize all buckets to 0
    for (int i = 0; i < m; ++i)
        buckets[i] = 0;
    //Increment the number of times each element is present in the input
    //array. Insert them in the buckets
    for (int i = 0; i < n; ++i)
        ++buckets[arr[i]];
    //Sort using insertion sort and concatenate
    for (int i = 0, j = 0; j < m; ++j)
        for (int k = buckets[j]; k > 0; --k)
            arr[i++] = j;
}


//Driver function to test above function
int main()
{
    int input_ar[] = {10, 24, 22, 62, 1, 50, 100, 75, 2, 3};
    int n = sizeof (input_ar) / sizeof (input_ar[0]);
    bucket_sort (input_ar, n);
    cout << "Sorted Array : " << endl;
    for (int i = 0; i < n; ++i)
        cout << input_ar[i] << " ";
    return 0;
}

/*
Sorted Array :
1 2 3 10 22 24 50 62 75 100