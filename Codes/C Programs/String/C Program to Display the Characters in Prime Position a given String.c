/*
* C Program to Display the Characters in Prime Position a given String
*/
#include <stdio.h>
#include <string.h>

void main()
{
    int i, j, k, count = 0;
    char str[50];
    printf("enter string
           ");
           scanf("%[^
                ]s", str);
           k = strlen(str);
           printf("prime characters in a string are
                  ");
                  for (i = 2; i <= k; i++)
    {
        count = 0;
        for (j = 2; j <= k; j++)
                {
                    if (i % j == 0)
                        {
                            count++;
                        }
                }
            if (count == 1)
                {
                    printf("%c
                           ", str[i - 1]);
                }
        }
}

enter string
get ready to get illuminted!
prime characters in a string are
e

t
r
a
t

u
i
d
