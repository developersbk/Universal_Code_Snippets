/*
 * C++ Program to Find the Number of Permutations of a Given String
 */
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int i, int n)
{
    int j;
    if (i == n)
        {
            cout<<a<<endl;
        }
    else
        {
            for (j = i; j <= n; j++)
                {
                    swap((a + i), (a + j));
                    permute(a, i + 1, n);
                    swap((a + i), (a + j));
                }
        }
}
int main()
{
    char a[] = "ABC";
    permute(a, 0, 2);
    getch();
}

/*

ABC
ACB
BAC
BCA
CBA
CAB