/*
/*
* C Program to Find the First Occurence of the any Character of
* String2 in string1 & also its Position
*/
#include <stdio.h>

void main()
{
    char s1[50], s2[10];
    int i, flag = 0;
    char *ptr1, *ptr2;
    printf("
           enter the string1:");
           scanf(" %[^
                ]s", s1);
           printf("
                  enter the string2:");
                  scanf(" %[^
                       ]s", s2);
                  /*COMPARING THE STRING1 CHARACTER BY CHARACTER WITH ALL CHARACTERS OF STRING1*/
                  for (i = 0, ptr1 = s1; *ptr1 !=  ''; ptr1++)
    {
        i++;
        for (ptr2 = s2; *ptr2 != ''; ptr2++)
                {
                    if (*ptr1  ==  *ptr2)
                        {
                            flag = 1;
                            break;
                        }
                }
            if (flag  ==  1)
                break;
        }
    if (flag  ==  1)
    printf("
           first occurance of character of string2 in string1 is at position:%d and character is %c", i, *ptr2);
           else
               printf("
                      none of the characters of string1 match with mone of characters of string2");
    }


       enter the string1:
       C Programming Class

       enter the string2:
       rnp

       first occurance of character of string2 in string1 is at position:3 and character is p