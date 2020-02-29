/*
* C Program to Count Number of Words in a given Text Or Sentence
*/
#include <stdio.h>
#include <string.h>

void main()
{
    char s[200];
    int count = 0, i;
    printf("enter the string
           ");
           scanf("%[^
                ]s", s);
           for (i = 0; s[i] != ''; i++)
    {
        if (s[i] == ' ')
                count++;
        }
    printf("number of words in given string are: %d
           ", count + 1);
}


enter the string
welcome to illuminate's c-programming app!
number of words in given string are: 5