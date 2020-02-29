/*
* C Program to Implement a strpbrk() Function
*/
#include <stdio.h>

char* strpbrk(char *, char *);

int main()
{
    char string1[50], string2[50];
    char *pos;
    printf("Enter the String:
           ");
           scanf(" %[^
                ]s", string1);
           printf("
                  Enter the Character Set:
                  ");
                  scanf(" %[^
                       ]s", string2);
                  pos=strpbrk(string1, string2);
                  printf("%s", pos);
}

       /* Locates First occurrence in string s1 of any character in string s2,
        * If a character from string s2 is found ,
       * a pointer to the character in string s1 is returned,
        * otherwise,  a NULL pointer is returned.
       */
       char* strpbrk(char *string1, char *string2)
{
    int i, j, pos, flag = 0;
    for (i = 0; string1[i] != ''; i++);
    pos = i;
    for (i = 0; string2[i] != ''; i++)
        {
            for (j = 0; string1[j] != ''; j++)
                {
                    if (string2[i] == string1[j])
                        {
                            if ( j <= p1)
                                {
                                    pos = j;
                                    flag = 1;
                                }
                        }
                }
        }
    if (flag == 1)
        {
            return &string1[pos];
        }
    else
        {
            return NULL;
        }
}


Enter the String:
C programming Class

Enter the Character Set:
mp
programming Class