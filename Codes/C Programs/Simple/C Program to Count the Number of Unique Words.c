/*
* C Program to Count the Number of Unique Words
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i = 0, e, j, d, k, space = 0;
    char a[50], b[15][20], c[15][20];
    printf("Read a string:
           ");
           fflush(stdin);
           scanf("%[^
                ]s", a);
           for (i = 0; a[i] != ''; i++)      //loop to count no of words
    {
        if (a[i] =  = ' ')
                space++;
        }
    i = 0;
        for (j = 0; j<(space + 1); i++, j++)  //loop to store each word into an 2D array
    {
        k = 0;
        while (a[i] != '')
                {
                    if (a[i] == ' ')
                        {
                            break;
                        }
                    else
                        {
                            b[j][k++] = a[i];
                            i++;
                        }
                }
            b[j][k] = '';
        }
    i = 0;
        strcpy(c[i], b[i]);
        for (e = 1; e <= j; e++)      //loop to check whether the string is already present in the 2D array or not
    {
        for (d = 0; d <= i; d++)
                {
                    if (strcmp(c[i], b[e]) == 0)
                        break;
                    else
                        {
                            i++;
                            strcpy(c[i], b[e]);
                            break;
                        }
                }
        }
    printf("
           Number of unique words in %s are:%d", a, i);
           return 0;
}


Read a string:
Welcome to Illuminate's C-programming class,  Welcome again to C class!
The length of input string is:70

Number of unique words in Welcome to ILLuminate's C-programming class,  Welcome again to C class! are:12