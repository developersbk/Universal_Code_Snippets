/*
* C Program to Find the Consecutive Occurrence of any Vowel
* in a String
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct detail
{
    char word[20];
};

int update(struct detail [], const char [], int);
int vowelcheck(char);

int main()
{
    struct detail s[10];
    char string[100], unit[20], c;
    int i = 0, j = 0, count = 0;
    printf("Enter string: ");
    i = 0;
    do
        {
            fflush(stdin);
            c = getchar();
            string[i++] = c;
        }
    while (c != '
            ');
            string[i - 1] = '';
            printf("The string entered is: %s
                   ", string);
                   for (i = 0; i < strlen(string); i++)
        {
            while (i < strlen(string) && string[i] != ' ' && isalnum(string[i]))
                    {
                        unit[j++] = string[i++];
                    }
                if (j != 0)
                    {
                        unit[j] = '';
                        count = update(s, unit, count);
                        j = 0;
                    }
            }
    printf("**Words with consecutive vowel**
           ");
           for (i = 0; i < count; i++)
    {
        printf("%s
               ", s[i].word);
    }
return 0;
}

int update(struct detail s[], const char unit[], int count)
{
    int i, j = 0;
    for (i = 0; i < strlen(unit) - 1; i++)
        {
            if (vowelcheck(unit[i]))
                {
                    if (vowelcheck(unit[i+ 1]))
                        {
                            /*To avoid duplicate strings*/
                            while (j < count && strcmp(s[j].word, unit))
                                {
                                    j++;
                                }
                            if (j == count)
                                {
                                    strcpy(s[j].word, unit);
                                    return (count + 1);
                                }
                        }
                }
        }
    return count;
}

int vowelcheck(char c)
{
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    int i;
    c = tolower(c);
    for (i = 0; i < 5; i++)
        {
            if (c == vowel[i])
                {
                    return 1;
                }
        }
    return 0;
}


Enter string:
Who will lead his team to victory
The string entered is:
Who will lead his team to victory
**Words with consecutive vowel**
lead
team