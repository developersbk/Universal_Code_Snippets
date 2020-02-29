/*
 * C++ Program to Implement Insertion Sort
 */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a[16], i, j, k, temp;
    cout<<"enter the elements\n";
    for (i = 0; i < 16; i++)
        {
            cin>>a[i];
        }
    for (i = 1; i < 16; i++)
        {
            for (j = i; j >= 1; j--)
                {
                    if (a[j] < a[j-1])
                        {
                            temp = a[j];
                            a[j] = a[j-1];
                            a[j-1] = temp;
                        }
                    else
                        break;
                }
        }
    cout<<"sorted array\n"<<endl;
    for (k = 0; k < 16; k++)
        {
            cout<<a[k]<<endl;
        }
    getch();
}

/*

Output
enter the elements
15
11
8
5
2
14
10
7
4
1
13
9
6
3
0
12
sorted array

0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15