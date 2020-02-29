#include <stdio.h>
int main()
{
    int i, j;
    for(i=5; i>=1; i--)
        {
            for(j=0; j<5; j++)
                {
                    printf("%c",'A' + j);
                }
            printf("\n");
        }
    return 0;
}