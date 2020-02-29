/*
* C Program to Accept 2 String & check whether all Characters
* in first String is Present in second String & Print
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define CHAR_SIZE 26

void alphacheck(char *, int []);
void create(char *, int[]);

int main()
{
    char str1[50], str2[50];
    int a1[CHAR_SIZE] = {0}, a2[CHAR_SIZE] = {0}, i;
    char str1_alpha[CHAR_SIZE], str2_alpha[CHAR_SIZE];
    printf("Enter string1: ");
    scanf("%s", str1);
    printf("Enter string2: ");
    scanf("%s", str2);
    alphacheck(str1, a1);
    alphacheck(str2, a2);
    create(str1_alpha, a1);
    create(str2_alpha, a2);
    if (strcmp(str1_alpha, str2_alpha) == 0)
        {
            printf("All characters match in %s and %s.
                   ", str1, str2);
                   printf("The characters that match are: ");
                   for (i = 0; i < strlen(str1_alpha); i++)
            {
                printf("%c, ", str1_alpha[i]);
                }
            printf("
                   ");
        }
    else
        {
            printf("All characters do not match in %s and %s.
                   ", str1, str2);
        }
    return 0;
}

void alphacheck(char *str, int a[])
{
    int i, index;
    for (i = 0; i < strlen(str); i++)
        {
            str[i] = tolower(str[i]);
            index = str[i] - 'a';
            if (!a[index])
                {
                    a[index] = 1;
                }
        }
}

void create(char *str, int a[])
{
    int i, j = 0;
    for (i = 0; i < CHAR_SIZE; i++)
        {
            if (a[i])
                {
                    str[j++] = i + 'a';
                }
        }
    str[j] = '';
}

Enter string1:
aspired
Enter string2:
despair
All characters match in aspired and despair.
The characters that match are:
a, d, e, i, p, r, s,
