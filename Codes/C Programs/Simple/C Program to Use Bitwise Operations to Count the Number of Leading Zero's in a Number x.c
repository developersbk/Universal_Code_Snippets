/*
* C Program to Use Bitwise Operations to Count the Number of
* Leading Zero's in a Number x
*/
#include <stdio.h>
#include <stdlib.h>
#define NUM_BITS_INT (sizeof(int)*8)
int find(int);

void main()
{
    int n, i, a, count = 0, flag = 1, m = 1, j, cmp;
    printf("Enter the number
           ");
           scanf("%d", &n);
           a = n >> 31 & 1;
           if (a == 0)
    {
        for (i = (NUM_BITS_INT)-1; i >= 0; i--)
                {
                    a = (n >> i)& 1;
                    if (a == 0)
                        {
                            count++;
                        }
                    else
                        {
                            for (j = n + 1;; j++)
                                {
                                    cmp = find(j);
                                    if (cmp == (((NUM_BITS_INT)-1) - count) + 1)
                                        {
                                            printf("next higher power -> %d
                                                   ", j);
                                                   break;
                                        }
                                }
                            break;
                        }
                }
        }
    else
        {
            for (i = (NUM_BITS_INT)-1; i >= 0; i--)
                {
                    a = (n >> i)& 1;
                    if (a == 1)
                        {
                            count++;
                        }
                    else
                        {
                            for (j = n + 1;; j++)
                                {
                                    cmp = find(j);
                                    if (cmp == (((NUM_BITS_INT)- 1) - count))
                                        {
                                            printf("next higher power -> %d
                                                   ", j);
                                                   break;
                                        }
                                }
                            break;
                        }
                }
        }
}

/* To find trailing zero's */
int find(int n)
{
    int count = 0, a, flag = 1, i;
    for (i = 0; i <= (NUM_BITS_INT) - 1; i++)
        {
            a = (n >> i) & 1;
            if (a == 1 && flag == 1)
                {
                    return count;
                }
            else
                {
                    count++;
                    flag = 1;
                }
        }
}


Enter the number
9
next higher power -> 16

Enter the number
-20
next higher power -> -16
Enter the number
44
next higher power -> 64

Enter the number
-7
next higher power -> -4

Enter the number
-31
next higher power -> -16

Enter the number
-56
next higher power -> -32

Enter the number
34
next higher power -> 64
