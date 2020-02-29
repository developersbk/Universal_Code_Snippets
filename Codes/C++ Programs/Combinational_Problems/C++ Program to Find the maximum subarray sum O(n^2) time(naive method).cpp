/*
 * C++ Program to Find the maximum subarray sum O(n^2)
 * time(naive method)
 */
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int n, sum = 0, ret = 0;
    cout<<"enter the number of values of array\n";
    cin>>n;
    int a[n];
    cout<<"enter the values present in array\n";
    for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
    for (int i = 0; i <= n-2; i++)
        {
            sum = 0;
            for (int j = i + 1; j <= n - 1; j++)
                {
                    sum = sum + a[j];
                    if (sum > ret)
                        {
                            ret = sum;
                        }
                }
        }
    cout<<"Maximum subarray sum:"<<ret;
    getch();
}

/*
enter the number of values of array
10
enter the values present in array
2
2
-5
4
-5
-6
-7
8
8
-16
Maximum subarray sum:16