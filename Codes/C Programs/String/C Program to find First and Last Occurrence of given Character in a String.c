/*
* C Program to find First and Last Occurrence of given
 * Character in a String
*/
#include <stdio.h>
#include <string.h>

void main()
{
    int i, count = 0, pos1, pos2;
    char str[50], key, a[10];
    printf("enter the string
           ");
           scanf(" %[^
                ]s", str);
           printf("enter character to be searched
                  ");
                  scanf(" %c", &key);
                  for (i = 0; i <= strlen(str); i++)
    {
        if (key == str[i])
                {
                    count++;
                    if (count  == 1)
                        {
                            pos1 = i;
                            pos2 = i;
                            printf("%d
                                   ", pos1 + 1);
                        }
                    else
                        {
                            pos2 = i;
                        }
                }
        }
    printf("%d
           ", pos2 + 1);
}


enter the string
Get ready to get Illuminted
enter character to be searched
y
9
