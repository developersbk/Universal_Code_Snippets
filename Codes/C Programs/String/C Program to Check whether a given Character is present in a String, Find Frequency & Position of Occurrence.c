/*
* C Program to Check whether a given Character is present in a
* String, Find Frequency & Position of Occurrence
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a, word[50];
    int i, freq = 0, flag = 0;
    printf("Enter character: ");
    scanf("%c", &a);
    printf("Now enter the word: ");
    scanf("%s", word);
    printf("Positions of '%c' in %s are: ", a, word);
    for (i = 0; i < strlen(word); i++)
        {
            if (word[i] == a)
                {
                    flag = 1;
                    printf("%d  ", i + 1);
                    freq++;
                }
        }
    if (flag)
        {
            printf("
                   Character '%c' occured for %d times.
                   ", a, freq);
        }
else
    {
        printf("None
               ");v     }
               return 0;
    }
Enter character:
r
Now enter the word:
programming
Positions of 'r' in programming are: 2  5
Character 'r' occured for 2 times.