/*
 * C program to read a string and check if it's a palindrome, without
 * using library functions. Display the result.
 */
#include <stdio.h>
#include <string.h>

void main()
{
    char string[25], reverse_string[25] = {'\0'};
    int  i, length = 0, flag = 0;
    fflush(stdin);
    printf("Enter a string \n");
    gets(string);
    /*  keep going through each character of the string till its end */
    for (i = 0; string[i] != '\0'; i++)
        {
            length++;
        }
    for (i = length - 1; i >= 0; i--)
        {
            reverse_string[length - i - 1] = string[i];
        }
    /*
     * Compare the input string and its reverse. If both are equal
     * then the input string is palindrome.
     */
    for (i = 0; i < length; i++)
        {
            if (reverse_string[i] == string[i])
                flag = 1;
            else
                flag = 0;
        }
    if (flag == 1)
        printf("%s is a palindrome \n", string);
    else
        printf("%s is not a palindrome \n", string);
}
/*
*OUTPUT:
Enter a string
sanfoundry
sanfoundry is not a palindrome

Enter a string
malayalam
malayalam is a palindrome
*/