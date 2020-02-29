#include <stdio.h>
int main()
{
    int i, j;
    for(i=0; i<=4; i++)
        {
            for(j=i; j>=0; j--)
                {
                    printf("%c",'A' + j);
                }
            printf("\n");
        }
    return 0;
}