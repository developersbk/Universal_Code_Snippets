#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int LOW = 1;
const int HIGH = 32000;

int main()
{
    int randomNumber, i;
    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);
    for (i = 0; i < 10; i++)
        {
            randomNumber = rand() % (HIGH - LOW + 1) + LOW;
            printf("%d ", randomNumber);
        }
    printf("...");
    return 0;
}