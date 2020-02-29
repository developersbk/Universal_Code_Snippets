/*
* C Program to Find All Possible Subsets of given Length in String
*/
#include <stdio.h>
#include <string.h>

char a[20];
int n, len, j;

void main()
{
    int i, index = 0, start = 0;
    printf("Enter the string
           ");
           scanf("%s", a);
           n = strlen(a);
           printf("enter input length
                  ");
                  scanf("%d", &len);
                  printf("The subsets are
                         ");
                         for (i  =  1; i < = n; i++)
    {
        if (index - start + 1  ==   i)
                {
                    if (i  ==   len)
                        {
                            for (j  =  index; j < n; j++)
                                {
                                    for (i  =  start; i < index; i++)
                                        printf("%c", a[i]);
                                    printf("%c
                                           ", a[j]);
                                }
                            if (start != i)
                                {
                                    start++;
                                    index = start;
                                }
                        }
                    else
                        {
                            index++;
                        }
                }
        }
}

/*
Enter the string
programming
enter input length
2
The subsets are
pr
po
pg
pr
pa
pm
pm
pi
pn
pg
enter the string
programming
enter input length
4
The subsets are
prog
pror
proa
prom
prom
proi
pron
prog
