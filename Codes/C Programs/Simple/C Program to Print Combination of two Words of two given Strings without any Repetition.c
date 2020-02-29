/*
* C Program to Print Combination of two Words of two
* given Strings without any Repetition
*/
#include <stdio.h>
#include <string.h>

void main()
{
    char string[100], str[10], c[10];
    int z, occ = 0, i = 0, j = 0, count = 0, len = 0;
    printf("Enter a string:");
    scanf("%[^
         ]s", string);
    printf("Enter the word to check its occurence:");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; string[i] != ''; i++)
        {
            count = 0;
            for (j = 0, z = i; j < len; j++, z++)
                {
                    c[j] = string[z];
                    if (c[j] == str[j])
                        {
                            count++; /* Incrementing the count if the characters of the main string match with the characters of the given word */
                        }
                }
            if (count == len && string[z] == ' ')
                {
                    occ++;        /* Incrementing the occ if word matches completely and next character in string is space */
                }
        }
    printf("The number of occ is %d
           ", occ);
}

Enter a string:
welcome to illumin8's c programming class,  welcome again to c class
Enter the word to check its occurence:
welcome
The number of occ is 2

Enter a string:
welcome to illumin8's c programming class,  welcome again to c class
Enter the word to check its occurence:
c
The number of occ is 2
