/*
 * C Program to Print the Words Ending with Letter S
*/
#include <stdio.h>
#include <string.h>

char str[100];

void main()
{
    int i, t, j, len;
    printf("Enter a string : ");
    scanf("%[^
         ]s", str);
    len = strlen(str);
    str[len] = ' ';
    for (t = 0, i = 0; i < strlen(str); i++)
        {
            if ((str[i] == ' ') && (str[i - 1] == 's'))
                {
                    for (j = t; j < i; j++)
                        printf("%c", str[j]);
                    t = i + 1;
                    printf("
                           ");
                }
            else
                {
                    if (str[i] == ' ')
                        {
                            t = i + 1;
                        }
                }
        }
}

Enter a string :
Welcome to Illumin8's C Programming Class, Welcome Again to C Class ! Illumin8's Class