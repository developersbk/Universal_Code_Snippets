/*
* C Program to replace first letter of every word with caps
*/
#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{
    FILE *fp1;
    int return_val;
    if ((fp1 = fopen(argv[1],"r+")) =  = NULL)
        {
            printf("file cant be opened");
            exit(0);
        }
    return_val = init_cap_file(fp1);
    if (return_val == 1)
        {
            printf("
                   success");
        }
    else
        {
            printf("
                   failure");
        }
}
int init_cap_file(FILE *fp1)
{
    char ch;
    ch = fgetc(fp1);
    if (ch >= 97 && ch <= 122)
        {
            fseek(fp1, -1L, 1);
            fputc(ch - 32, fp1);
        }
    while (ch != EOF)
        {
            if (ch = = ' '|| ch == '
                       ')
                       {
                           ch = fgetc(fp1);
                           if (ch >= 97 && ch <= 122)
                {
                    fseek(fp1, -1L, 1);
                        fputc(ch - 32, fp1);
                    }
                       }
                else
                    ch = fgetc(fp1);
                }
    return 1;
}
chandana ravella
chanikya ravella
sree lakshmi ravella
sree ramulu ravella
cat file5test
Chandana Ravella
Chanikya Ravella
Sree Lakshmi Ravella
Sree Ramulu Ravella