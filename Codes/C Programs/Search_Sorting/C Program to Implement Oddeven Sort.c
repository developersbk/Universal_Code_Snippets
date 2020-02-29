/*
 * C Program to Implement Oddeven Sort
 */
#include <stdio.h>
#define MAX 7

void swap(int *,int *);
void oddeven_sort(int *);

void main()
{
    int a[MAX], i;
    printf("enter the elements in to the matrix :");
    for (i = 0; i < MAX; i++)
        {
            scanf("%d", &a[i]);
        }
    printf("sorted elements are :\n");
    oddeven_sort(a);
    for (i = 0; i < MAX; i++)
        {
            printf(" %d", a[i]);
        }
}

/* swaps the elements */
void swap(int * x, int * y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* sorts the array using oddeven algorithm */
void oddeven_sort(int * x)
{
    int sort = 0, i;
    while (!sort)
        {
            sort = 1;
            for (i = 1; i < MAX; i += 2)
                {
                    if (x[i] > x[i+1])
                        {
                            swap(&x[i], &x[i+1]);
                            sort = 0;
                        }
                }
            for (i = 0; i < MAX - 1; i += 2)
                {
                    if (x[i] > x[i + 1])
                        {
                            swap(&x[i], &x[i + 1]);
                            sort = 0;
                        }
                }
        }
}
/*
*OUTPUT:
/* average case
$ a.out
enter the elements in to the matrix :7 8 3 2 5 4 9
sorted elements are :
 2 3 4 5 7 8 9

/* best case
enter the elements in to the matrix :1 2 3 4 5 6 7
sorted elements are :
 1 2 3 4 5 6 7

/* worst case
enter the elements in to the matrix :7 6 5 4 3 2 1
sorted elements are :
 1 2 3 4 5 6 7
 */