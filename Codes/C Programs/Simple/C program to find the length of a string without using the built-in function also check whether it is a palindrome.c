/*
 * C program to find the length of a string without using the
 * built-in function also check whether it is a palindrome
 */
#include <stdio.h>
#include <string.h>

void main()
{
    char string[25], reverse_string[25] = {''};
    int i, length = 0, flag = 0;
    printf("Enter a string
           ");
           gets(string);
           /*  keep going through each character of the string till its end */
           for (i = 0; string[i] != ''; i++)
    {
        length++;
    }
printf("The length of the string '%s' = %d
       ", string, length);
       for (i = length - 1; i >= 0 ; i--)
    {
        reverse_string[length - i - 1] = string[i];
        }
    /*  Check if the string is a Palindrome */
    for (flag = 1, i = 0; i < length ; i++)
    {
        if (reverse_string[i] != string[i])
                flag = 0;
        }
    if (flag == 1)
    printf ("%s is a palindrome ", string);
    else
        printf("%s is not a palindrome ", string);
    }


Enter a string
how  are you
The length of the string 'how  are you' = 12
        how  are you is not a palindrome

        Enter a string
        madam
        The length of the string 'madam' = 5
                madam is a palindrome