/*
 * C Program to Find the Length of the Longest Repeating Sequence in a String
 */
#include <stdio.h>
#include <string.h>

char string[100], words[100][100];
int len = 0, word_cnt = 0;

int main()
{
    int i, j = 0, k, mlen = 0, rlen = 0, s = 0, c = 0;
    printf("\nEnter the string");
    scanf(" %[^\n]s", string);
    for (len = 0; string[len] != '\0'; len++);
    /*
     * Storing the individual words in an array
     */
    for (k = 0; k < len; k++)
        {
            if (string[k] != ' ')
                {
                    words[s][j] = string[k];
                    j++;
                }
            if (string[k] == ' ')
                {
                    words[s][j] = '\0';
                    j = 0;
                    s++;
                    word_cnt++;
                }
        }
    word_cnt++;
    /*
     * Compare on Word basis if same word is repeated then check next word and so on
     * Increment a counter when consecutive words are repeated
     */
    for (i = 0; i <= word_cnt; i++)
        {
            len = 0;
            for (j = i+1; j <= word_cnt-1; j++)
                {
                    if (strcmp(words[i], words[j]) != 0)
                        {
                            continue;
                        }
                    else if (strcmp(words[i], words[j]) == 0)
                        {
                            len++;
                            for (k = i+1, m = j+1; k < j; k++, m++)
                                {
                                    if (strcmp(words[k], words[m]) == 0)
                                        {
                                            len++;
                                            continue;
                                        }
                                    else
                                        {
                                            break;
                                        }
                                }
                            if (rlen < len)
                                {
                                    rlen = len;
                                    len = 0;
                                }
                            len = 0;
                        }
                    /*
                     * Finding length of Longest Repeated Sequence
                     */
                    if (mlen < rlen)
                        {
                            s = i;
                            mlen = rlen;
                        }
                }
        }
    printf("\nLength of Longest Repeating Sequence:%d\n", mlen);
    for (i = s, j = 0; j < mlen; i++, j++)
        printf(" %s", words[i]);
    printf("\n");
}
/*
*OUTPUT:
Enter the string
Welcome to C Programming Class,   Welcome Again to C Programming Class !

Length of Longest Repeating Sequence:4
to C Programming Class
*/