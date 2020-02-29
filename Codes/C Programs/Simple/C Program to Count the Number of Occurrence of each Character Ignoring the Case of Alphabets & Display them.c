/*
* C Program to Count the Number of Occurrence of
* each Character Ignoring the Case of Alphabets
* & Display them
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
    int i = 0, index;
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
                    c = tolower(c);
                    index = c - 'a';
                    s[index].freq++;
        }
while (1);
    string[i - 1] = '';
    printf("The string entered is: %s
           ", string);
           printf("*************************
                  Character	Frequency
                  *************************
                  ");
                  for (i = 0; i < 26; i++)
    {
        if (s[i].freq)
                {
                    printf("     %c		   %d
                           ", s[i].c, s[i].freq);
                }
        }
    return
        0;
}


Enter string:
A quIck brOwn fox JumpEd over a lazy dOg
The string entered is:
A quIck brOwn fox JumpEd over a lazy dOg
*************************
Character Frequency
*********************
a     3
b     1
c     1
d     2
e     2
f     1
g     1
i     1
j     1
k     1
l     1
m     1
n     1
o     4
p     1
q     1
r     2
u     2      v     1      w     1      x     1      y     1      z     1