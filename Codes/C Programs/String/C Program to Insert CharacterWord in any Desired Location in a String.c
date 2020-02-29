/*
* C Program to Insert Character/Word in any Desired Location
* in a String
*/
#include <stdio.h>
#include <string.h>

void main()
{
    int i, j, count = 0, pos, flag = 0;
    char s1[100], s2[10], s3[100];
    char *ptr1, *ptr2, *ptr3;
    printf("
           enter the String:");
           scanf(" %[^
                ]s", s1);
           printf("
                  enter the string to be inserted:");
                  scanf(" %[^
                       ]s", s2);
                  printf("
                         enter the position you like to insert:");
                         scanf("%d", &pos);
                         ptr1 = s1;
                         ptr3 = s3;
                         /*COPYING THE GIVEN STRING TO NEW ARRAY AND INSERTING THE STRING IN NEW ARRAY*/
                         for (i = 0, j = 0; *ptr1 != ''; ptr1++, i++, j++, ptr3++)
    {
        s3[j] = s1[i];
            if (*ptr1 == ' ' && flag != 1)
                ++count;
            if (flag != 1 && count == pos - 1)
                {
                    flag = 1;
                    for(ptr2 = s2; *ptr2 != ''; ptr2++)
                        {
                            s3[++j] = *ptr2;
                            ptr3++;
                        }
                    s3[++j] = ' ';
                    ptr3++;
                }
        }
    s3[j] = '';
            printf("
                   the string after modification is
                   %s
                   ", s3);
}



        enter the string:
        Welcome to illuminates C Programming Class,  Welcome Again to C Class!
        enter the word to insert:
        illumin8s
        enter the position you like to insert:3
        the string after modification is

        Welcome to illumin8s illuminates C Programming Class,  Welcome Again to C Class!
