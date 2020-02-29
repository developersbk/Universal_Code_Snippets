/*
 * C++ Program to Find the minimum element of an array using Binary Search approach
 */

#include<iostream>
#include<conio.h>
using namespace std;
void min_heapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
        {
            if (j < n && a[j+1] < a[j])
                j = j + 1;
            if (temp < a[j])
                break;
            else if (temp >= a[j])
                {
                    a[j / 2] = a[j];
                    j = 2 * j;
                }
        }
    a[j / 2] = temp;
    return;
}
void build_minheap(int *a, int n)
{
    int i;
    for(i = n / 2; i >= 1; i--)
        {
            min_heapify(a, i, n);
        }
}
int main()
{
    int n, i, x;
    cout<<"enter no of elements of array\n";
    cin>>n;
    int a[20];
    for (i = 1; i <= n; i++)
        {
            cout<<"enter element"<<(i)<<endl;
            cin>>a[i];
        }
    build_minheap(a, n);
    cout<<"Minimum element is "<<a[1]<<endl;
    getch();
}

/*
Output

enter no of elements of array
8
enter element1
3
enter element2
7
enter element3
6
enter element4
1
enter element5
5
enter element6
4
enter element7
0
enter element8
2
Minimum element is 0