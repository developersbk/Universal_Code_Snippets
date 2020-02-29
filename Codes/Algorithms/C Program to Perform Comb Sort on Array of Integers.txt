/*
 * C Program to Perform Comb Sort on Array of Integers
 */
#include <stdio.h>
#include <stdlib.h>

/*Function to find the new gap between the elements*/
int newgap(int gap)
{
    gap = (gap * 10) / 13;
    if (gap == 9 || gap == 10)
        gap = 11;
    if (gap < 1)
        gap = 1;
    return gap;
}

/*Function to implement the combsort*/
void combsort(int a[], int aSize)
{
    int gap = aSize;
    int temp, i;
    for (;;)
        {
            gap = newgap(gap);
            int swapped = 0;
            for (i = 0; i < aSize - gap; i++)
                {
                    int j = i + gap;
                    if (a[i] > a[j])
                        {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                            swapped  =  1;
                        }
                }
            if (gap  ==  1 && !swapped)
                break;
        }
}
int main ()
{
    int n, i;
    int *a;
    printf("Please insert the number of elements to be sorted: ");
    scanf("%d", &n);       // The total number of elements
    a  =  (int *)calloc(n, sizeof(int));
    for (i = 0; i< n; i++)
        {
            printf("Input element %d :", i);
            scanf("%d", &a[i]); // Adding the elements to the array
        }
    printf("unsorted list");       // Displaying the unsorted array
    for(i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
    combsort(a, n);
    printf("Sorted list:\n");        // Display the sorted array
    for(i = 0; i < n; i++)
        {
            printf("%d ", (a[i]));
        }
    return 0;
}
/*
*OUTPUT:
Please insert the number of elements to be sorted: 10
Input element 0 :5
Input element 1 :6
Input element 2 :1
Input element 3 :3
Input element 4 :4
Input element 5 :7
Input element 6 :8
Input element 7 :9
Input element 8 :0
Input element 9 :6
unsorted list5613478906Sorted list:
0 1 3 4 5 6 6 7 8 9
Please insert the number of elements to be sorted: 10
Input element 0 :1
Input element 1 :2
Input element 2 :3
Input element 3 :4
Input element 4 :5
Input element 5 :6
Input element 6 :7
Input element 7 :8
Input element 8 :9
Input element 9 :10
unsorted list12345678910Sorted list:
1 2 3 4 5 6 7 8 9 10
Please insert the number of elements to be sorted: 10
Input element 0 :10
Input element 1 :9
Input element 2 :8
Input element 3 :7
Input element 4 :6
Input element 5 :5
Input element 6 :4
Input element 7 :3
Input element 8 :2
Input element 9 :1
unsorted list10987654321Sorted list:
1 2 3 4 5 6 7 8 9 10
*/