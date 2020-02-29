#include <stdio.h>
int main()
{
    int i, j;
    for(i=4; i>=0; i--)
        {
            for(j=4; j>=i; j--)
                {
                    printf("%c",'A' + j);
                }
            printf("\n");
        }
    return 0;
}