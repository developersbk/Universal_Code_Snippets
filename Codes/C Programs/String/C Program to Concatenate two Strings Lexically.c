/*
 * C Program to Concatenate the given two Strings Lexically
 */
#include <string.h>
#include <stdio.h>

void sort(char *p);

void main()
{
    char string1[100], string2[100];
    int i, len, j;
    printf("\nEnter a string : ");
    scanf("%[^\n]s", string1);
    printf("\nEnter another string to concat : ");
    scanf(" %[^\n]s", string2);
    len = strlen(string1);
    string1[len] = ' ';
    for(i = 0, j = len + 1; i < strlen(string2); i++, j++)
        string1[j] = string2[i];
    string1[j]='\0';
    sort(string1);
}

/* Sorting to make concatenation lexical */
void sort(char *p)
{
    char temp[100];
    char a[100][100];
    int t1, i, j = 0, k = 0, l = strlen(p), x = 0, y = 0, z = 0, count, l1, l2;
    for (i = 0; i < l; i++)
        {
            if (p[i] != ' ')
                {
                    a[k][j++] = p[i];
                }
            else
                {
                    a[k][j] = '\0';
                    k++;
                    j = 0;
                }
        }
    t1 = k;
    k = 0;
    for (i = 0; i < t1; i++)
        {
            for (j = i + 1; j <= t1; j++)
                {
                    l1 = strlen(a[i]);
                    l2 = strlen(a[j]);
                    if (l1 > l2)
                        count = l1;
                    else
                        count = l2;
                    x = 0, y = 0;
                    while ((x < count) || (y < count))
                        {
                            if (a[i][x] == a[j][y])
                                {
                                    x++;
                                    y++;
                                    continue;
                                }
                            else if (a[i][x] < a[j][y]) break;
                            else if (a[i][x] > a[j][y])
                                {
                                    for (z = 0; z < l2; z++)
                                        {
                                            temp[z] = a[j][z];
                                            a[j][z] = '\0';
                                        }
                                    temp[z] = '\0';
                                    for (z = 0; z < l1; z++)
                                        {
                                            a[j][z] = a[i][z];
                                            a[i][z] = '\0';
                                        }
                                    a[j][z] = '\0';
                                    for (z = 0; z < strlen(temp); z++)
                                        {
                                            a[i][z] = temp[z];
                                        }
                                    break;
                                }
                        }
                }
        }
    for (i = 0; i < l; i++)
        p[i] = '\0';
    k = 0;
    j = 0;
    for (i = 0; i < l; i++)
        {
            if (a[k][j] != '\0')
                {
                    p[i] = a[k][j++];
                }
            else
                {
                    k++;
                    j = 0;
                    p[i] = ' ';
                }
        }
    puts(p);
}
/*
*OUTPUT:

Enter a string : hello this

Enter another string to concat : is sanfoundry
hello is sanfoundry this
*/