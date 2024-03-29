/*
 * C Program to Reverse the String using Recursion
 */
#include <stdio.h>
#include <string.h>

void reverse(char [], int, int);
int main()
{
    char str1[20];
    int size;
    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    size = strlen(str1);
    reverse(str1, 0, size - 1);
    printf("The string after reversing is: %s\n", str1);
    return 0;
}

void reverse(char str1[], int index, int size)
{
    char temp;
    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;
    if (index == size / 2)
        {
            return;
        }
    reverse(str1, index + 1, size);
}
/*
*OUTPUT:
Enter a string to reverse: malayalam
The string after reversing is: malayalam

Enter a string to reverse: cprogramming
The string after reversing is: gnimmargorpc
*/