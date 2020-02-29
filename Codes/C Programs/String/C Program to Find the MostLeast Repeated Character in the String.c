/*
*C Program to Find the Most/Least Repeated Character in the String
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct detail
{
    char c;
    int freq;
};

int main()
{
    struct detail s[26];
    char string[100], c;
    int max[26] = {0}, min[26] = {0};
    int i = 0, index, maxcount = 1, mincount = 1000, j;
    for (i = 0; i < 26; i++)
        {
            s[i].c = i + 'a';
            s[i].freq = 0;
        }
    printf("Enter string: ");
    i = 0;
    do
        {
            fflush(stdin);
            c = getchar();
            string[i++] = c;
            if (c == '
                    ')
                    {
                        break;
                    }
                    else if (!isalpha(c))
                {
                    continue;
                }
        c = tolower(c);
            index = c - 'a';
            s[index].freq++;
    }
while (1);
    string[i - 1] = '';
    printf("The string entered is: %s
           ", string);
           for (i = 0; i < 26; i++)
    {
        if (s[i].freq)
                {
                    if (maxcount < s[i].freq)
                        {
                            for (j = 0; j < 26; j++)
                                {
                                    max[j] = 0;
                                }
                            max[i] = 1;
                            maxcount = s[i].freq;
                        }
                    else if (maxcount == s[i].freq)
                        {
                            max[i] = 1;
                        }
                    if (mincount >= s[i].freq)
                        {
                            if (mincount == s[i].freq)
                                {
                                    min[i] = 1;
                                }
                            else
                                {
                                    for (j = 0; j < 26; j++)
                                        {
                                            min[j] = 0;
                                        }
                                    min[i] = 1;
                                    mincount = s[i].freq;
                                }
                        }
                }
        }
    printf("The most repeated characters are: ");
    for (i = 0; i < 26; i++)
    {
        if (max[i])
                {
                    printf("%c ", i + 'a');
                }
        }
    printf("
           The least repeated characters are: ");
           for (i = 0; i < 26; i++)
    {
        if (min[i])
                {
                    printf("%c ", i + 'a');
                }
        }
    printf("
           ");
           return 0;
}


Enter string:
I love C programming
The string entered is:
I love C programming
The most repeated characters are:
g i m o r
The least repeated characters are:
a c e l n p v
