/*
 * C Program to Sort an Integer Array using LSDRadix Sort Algorithm
 */
#include <stdio.h>

int min = 0, count = 0, array[100] = {0}, array1[100] = {0};

void main()
{
    int k, i, j, temp, t, n;
    printf("Enter size of array :");
    scanf("%d", &count);
    printf("Enter elements into array :");
    for (i = 0; i < count; i++)
        {
            scanf("%d", &array[i]);
            array1[i] = array[i];
        }
    for (k = 0; k < 3; k++)
        {
            for (i = 0; i < count; i++)
                {
                    min = array[i] % 10;        /* To find minimum lsd */
                    t = i;
                    for (j = i + 1; j < count; j++)
                        {
                            if (min > (array[j] % 10))
                                {
                                    min = array[j] % 10;
                                    t = j;
                                }
                        }
                    temp = array1[t];
                    array1[t] = array1[i];
                    array1[i] = temp;
                    temp = array[t];
                    array[t] = array[i];
                    array[i] = temp;
                }
            for (j = 0; j < count; j++)        /*to find MSB */
                array[j] = array[j] / 10;
        }
    printf("Sorted Array (lSdradix sort) : ");
    for (i = 0; i < count; i++)
        printf("%d ", array1[i]);
}
/*
*OUTPUT:
/* Average Case
Enter size of array :7
Enter elements into array :170
45
90
75
802
24
2
Sorted Array (ladradix sort) : 2 24 45 75 90 170 802

/*Best case
Enter size of array :7
Enter elements into array :22
64
121
78
159
206
348
Sorted Array (ladradix sort) : 22 64 78 159 121 206 348

/* Worst case
Enter size of array :7
Enter elements into array :985
27
64
129
345
325
091
Sorted Array (ladradix sort) : 27 64 91 129 325 345 985
*/