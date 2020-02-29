/*
* C Program to Sort the String(ignore spaces) and Repeated
* Characters should be present only Once
*/
#include <stdio.h>
#include <string.h>

void main()
{
    int i, j = 0, k = 0;
    char str[100], str1[10][20], temp, min;
    printf("enter the string:");
    scanf("%[^
         ]s", str);
    /* ignores spaces */
    for (i = 0; str[i]!= ''; i++)
        {
            if (str[i] == ' ')
                {
                    for (j = i; str[j] != ''; j++)
                        {
                            str[j] = str[j + 1];
                        }
                }
        }
    /* removes repeated characters */
    for (i = 0; str[i]!= ''; i++)
        {
            for (j = i + 1; str[j] != ''; j++)
                {
                    if (str[i] == str[j])
                        {
                            for (k = j; str[k] != ''; k++)
                                str[k] = str[k+1];
                            j--;
                        }
                }
        }
    /* sorts the string */
    for (i = 0; str[i] != ''; i++)
        {
            for (j = 0; str[j] != ''; j++)
                {
                    if (str[j] > str[i])
                        {
                            temp = str[i];
                            str[i] = str[j];
                            str[j] = temp;
                        }
                }
        }
    printf("%s", str);
}

enter the string:
abcde| bcd! abcdefg??
!?abcdefg|