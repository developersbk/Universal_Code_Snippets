/*
 * C Program to Sort the Array Elements using Gnome Sort
 */
#include <stdio.h>

void main()
{
    int i, temp, ar[10], n;
    printf("\nenter the elemts number u would like to enter:");
    scanf("%d", &n);
    printf("\nenter the elements to be sorted through gnome sort:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    i = 0;
    while (i < n)
        {
            if (i == 0 || ar[i - 1] <= ar[i])
                i++;
            else
                {
                    temp = ar[i-1];
                    ar[i - 1] = ar[i];
                    ar[i] = temp;
                    i = i - 1;
                }
        }
    for (i = 0; i < n; i++)
        printf("%d\t", ar[i]);
}
/*
*OUTPUT:
enter the elemts number u would like to enter:7
enter the elements to be sorted through gnome sort:
6
0
9
5
2
4
3
0       2       3       4       5       6       9

enter the elemts number u would like to enter:6
enter the elements to be sorted through gnome sort:
1
2
4
5
6
7
1       2       4       5       6       7

enter the elemts number u would like to enter:9
enter the elements to be sorted through gnome sort:
9
8
7
6
5
4
3
3
2
2       3       3       4       5       6       7       8       9
*/