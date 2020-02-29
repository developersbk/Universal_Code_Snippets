/*
* C Program To Find the Sum of ASCII values of All Characters in a
 * given String
*/
#include <stdio.h>
#include <string.h>

void main()
{
    int sum = 0, i, len;
    char string1[100];
    printf("Enter the string : ");
    scanf("%[^]s", string1);
    len = strlen(string1);
    for (i = 0; i < len; i++)
        {
            sum = sum + string1[i];
        }
    printf("
           Sum of all characters : %d ",sum);
}
/*
   Enter the string : Welcome to Illumin8's C Programming Class, Welcome Again to C Class !

Sum of all characters : 6296