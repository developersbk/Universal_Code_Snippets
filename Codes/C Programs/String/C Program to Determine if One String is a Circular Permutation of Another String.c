/*
* C Program to Determine if One String is a Circular Permutation of
* Another String
*/
#include <stdio.h>
#include <string.h>

#include <ctype.h>

#include <stdlib.h>
#define CHAR_SIZE 26

void alphacheck(char *, int []);
void create(char [], char [], int[]);

int main()

{
    char str1[50], str2[50];
    int a1[CHAR_SIZE] = {0};
    char str2_rem[50];
    printf("Enter string1: ");
    scanf("%s", str1);
    printf("Enter string2: ");
    scanf("%s", str2);
    alphacheck(str1, a1);
    create(str2_rem, str2, a1);
    printf("On removing characters from second string we get: %s
           ", str2_rem);
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
    printf("
           ");
}

void create(char str_rem[], char str[], int list[])
{
    int i, j = 0, index;
    for (i = 0; i < strlen(str); i++)
        {
            index = str[i] - 'a';
            if (!list[index])
                {
                    str_rem[j++] = str[i];
                }
        }
    str_rem[j] = '';
}


Enter string 1:
abcd
Enter string 2:
dabc
abcd & dabc are circular permutation of each other.
