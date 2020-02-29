/*
 *  C Program to Reverse the String using Both Recursion and Iteration
 */
#include <stdio.h>
#include <string.h>

/* Function Prototype */
void disp_str1_rec(char *);

void main()
{
    char str1[100], *ptr;
    int len1 = 0, i;
    char ch;
    printf("Enter the string:\n");
    scanf("%[^\n]s", str1);
    ptr = str1;
    len1 = strlen(str1);
    printf("Using iteration:\n");
    for (i = len1 - 1; i >= 0; i--)       /* Iterative loop */
        {
            ch = str1[i];
            printf("%c", ch);
        }
    printf("Using recurssion:\n");
    disp_str1_rec(ptr);
}

/* Code to reverse the string using Recursion */
void disp_str1_rec(char *stng)
{
    char ch;
    if (*stng != '\0')
        {
            ch = *stng;
            stng++;
            disp_str1_rec(stng);
            printf("%c", ch);
        }
    else
        return;
}
/*
*OUTPUT:
Enter the string:
welcome to sanfoundry's c programming class

Using iteration:
ssalc gnimmargorp c s'yrdnuofnas ot emoclew
Using recurssion:
ssalc gnimmargorp c s'yrdnuofnas ot emoclewi
*/