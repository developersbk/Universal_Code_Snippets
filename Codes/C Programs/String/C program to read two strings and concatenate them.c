/*
 * C program to read two strings and concatenate them, without using
 * library functions. Display the concatenated string.
 */
#include <stdio.h>
#include <string.h>

void main()

{
    char string1[20], string2[20];
    int i, j, pos;
    /*  Initialize the string to NULL values */
    memset(string1, 0, 20);
    memset(string2, 0, 20);
    printf("Enter the first string : ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
    printf("First string  = %s", string1);
    printf("Second string = %s", string2);
    /*  Concate the second string to the end of the first string */
    for (i = 0; string1[i] != ''; i++)
        {
            /*  null statement: simply traversing the string1 */
            ;
        }
    pos = i;
    for (j = 0; string2[j] != ''; i++)
        {
            string1[i] = string2[j++];
        }
    /*  set the last character of string1 to NULL */
    string1[i] = '';
    printf("Concatenated string = %s
           ", string1);
}
/*

Enter the first string : illumin8
Enter the second string: ed
First string  = illumin8
Second string = ed
Concatenated string = illumin8ed
